#include <iostream>

#include "Navigation.h"
#include "EconomicStrategy.h"
#include "FastStrategy.h"
#include "ScenicStrategy.h"
#include "Display2dStrategy.h"
#include "Display3dStrategy.h"

int main() {
    FastStrategy* fast = new FastStrategy();
    ScenicStrategy* scenic = new ScenicStrategy();
    EconomicStrategy* economic = new EconomicStrategy();

    Display2dStrategy* twoD = new Display2dStrategy();
    Display3dStrategy* threeD = new Display3dStrategy();

    Navigation* navi = new Navigation(fast, twoD);

    navi->init();
    navi->setStrategy(scenic);
    navi->init();
    navi->setStrategy(economic);
    navi->setDisplay(threeD);
    navi->init();

    delete navi;
    delete fast;
    delete scenic;
    delete economic;
    delete twoD;
    delete threeD;

    return 0;
}
