#include "BatteryLogger.h"
#include <string>
#include <iostream>

BatteryLogger::BatteryLogger(SystemBattery &subject, std::string name) : subject(subject), name(std::move(name)) {
    this->subject.attach(this);
}

BatteryLogger::~BatteryLogger() {
    this->subject.detach(this);
}

void BatteryLogger::update() {
    int newValue = this->subject.getData();
    std::cout << "This is " << name << "! Received value " << newValue << "\n";
}

