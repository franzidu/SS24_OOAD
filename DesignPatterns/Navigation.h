#ifndef NAVIGATION_H
#define NAVIGATION_H

#include "NavigationStrategy.h"
#include "DisplayStrategy.h"

class Navigation {
public:
    explicit Navigation(NavigationStrategy* strategy, DisplayStrategy* display):strategy(strategy), display(display){};
    void init();

private:
    NavigationStrategy* strategy;
    DisplayStrategy* display;
public:
    void setStrategy(NavigationStrategy *strategy);
    void setDisplay(DisplayStrategy *display);

    // The copy constructor and the copy assignment operator should be declared private
    // For simplicity of the exercise we ignore the rule of three
    //Navigation(const Navigation&);
    //Navigation& operator=(const Navigation&);
};

#endif //NAVIGATION_H
