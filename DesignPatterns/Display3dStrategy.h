//
// Created by Franziska Dudichum on 24.06.24.
//

#ifndef STRATEGY_DISPLAY3DSTRATEGY_H
#define STRATEGY_DISPLAY3DSTRATEGY_H

#include "DisplayStrategy.h"

class Display3dStrategy: public DisplayStrategy {
public:
    Display3dStrategy() = default;
    void displayRoute() override;
};


#endif //STRATEGY_DISPLAY3DSTRATEGY_H
