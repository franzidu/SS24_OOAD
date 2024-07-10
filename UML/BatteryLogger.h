#ifndef _BATTERYLOGGER_H
#define _BATTERYLOGGER_H

#include "Observer.h"
#include "SystemBattery.h"
#include <string>

class BatteryLogger : public Observer {
public:
BatteryLogger(SystemBattery &subject, std::string name);

~BatteryLogger() override;

void update() override;

private:
SystemBattery &subject;
std::string name;
};

#endif //_BATTERYLOGGER_H
