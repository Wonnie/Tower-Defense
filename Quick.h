//header here later
#ifndef QUICK_H
#define QUICK_H

#include "Tower.h"

class Quick : public Tower {

public:
    Quick(int placeX, int placeY);
    void display();
    void fire();

};


#endif // QUICK_H