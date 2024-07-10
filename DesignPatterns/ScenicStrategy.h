#ifndef NAVISCENIC_H
#define NAVISCENIC_H

#include "NavigationStrategy.h"


class ScenicStrategy: public NavigationStrategy {
public:
    void calculateRoute() override;
};



#endif //NAVISCENIC_H
