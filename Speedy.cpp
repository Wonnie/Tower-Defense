
/*
Project Group: Chris Groce, Kevin McGinn, Nick Taylor
CSE 20212
3/20/2012

Speedy.cpp

This is the implementation for the Speedy class,
which inherits from Enemy

*/

#include "Enemy.h"
#include "Speedy.h"
#include <cmath>

using namespace std;

Speedy::Speedy(int startX, int startY, int wave) : Enemy(startX, startY) { // constructor; uses member initialization sytax to create an enemy of
    //initialize values
    initHealth(7*pow(1.5,wave-1)); // health is based directly off of the wave                                                 // type "Puny"
    initSpeed(10);
    initType('s');
    initValue(10*((wave+3)/3)); // value is based off of wave and goes up every 5 waves
}


void Speedy::takeDamage(int unchangedDamage, char type) { // causes the ememy to take damage of specified type

    if(type == 'b'){
        loseHealth(unchangedDamage); //regular damage from basic towers
    }
    else if (type == 'q') {
        loseHealth(unchangedDamage*2); //double damage from quick towers
    }
    else if(type == 'f') {
        loseHealth(unchangedDamage/2); //half damage from fire towers
    }
    else {
        loseHealth(unchangedDamage); //regular damage otherwise
    }
}
