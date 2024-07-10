#ifndef NAVIFAST_H
#define NAVIFAST_H


#include "NavigationStrategy.h"

    class FastStrategy: public NavigationStrategy {
    public:
        void calculateRoute() override;
    };

#endif //NAVIFAST_H
