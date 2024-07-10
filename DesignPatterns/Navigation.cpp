#include "Navigation.h"
#include <iostream>


void Navigation::init() {
    std::cout << "Welcome to the Simulator of Navigation Devices!" << std::endl;

strategy->calculateRoute();
display->displayRoute();
}

void Navigation::setStrategy(NavigationStrategy *strategy) {
    this->strategy = strategy;
}

void Navigation::setDisplay(DisplayStrategy *display) {
    this->display = display;
}

