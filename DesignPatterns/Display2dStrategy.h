//
// Created by Franziska Dudichum on 24.06.24.
//

#ifndef STRATEGY_DISPLAY2DSTRATEGY_H
#define STRATEGY_DISPLAY2DSTRATEGY_H

#include "DisplayStrategy.h"

class Display2dStrategy: public DisplayStrategy {
public:
    Display2dStrategy() = default;
    void displayRoute() override;
};


#endif //STRATEGY_DISPLAY2DSTRATEGY_H
