#ifndef NAVIECONOMIC_H
#define NAVIECONOMIC_H


#include "NavigationStrategy.h"
class EconomicStrategy: public NavigationStrategy {
public:
    void calculateRoute() override;
};


#endif //NAVIECONOMIC_H
