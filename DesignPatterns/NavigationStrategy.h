//
// Created by nils on 24.06.24.
//

#ifndef STRATEGY_NAVIGATIONSTRATEGY_H
#define STRATEGY_NAVIGATIONSTRATEGY_H


class NavigationStrategy {
public:
    NavigationStrategy() = default;
    virtual void calculateRoute() = 0;
};


#endif //STRATEGY_NAVIGATIONSTRATEGY_H
