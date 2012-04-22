/*Chris Groce
  Tower.cpp-source file for Tower.h
  CSE20212 */

#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>
#include <string>
#include <cstdlib>
#include <QString>
#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include "Board.h"
#include "Tower.h"

Tower::Tower(int x, int y) {
    xPos=x;
    yPos=y;
}

int Tower::getPosX(){
    return xPos;
}

int Tower::getPosY(){
    return yPos;
}

int Tower::getFiringRate(){
    return firingRate;
}

int Tower::getPower(){
    return power;
}

int Tower::sell(){				// returns 3/4 of yo money
    return cost*3/4;
}

void Tower::upgradePower(){
    power*=1.2;
    powerCost*=2;
}

void Tower::upgradeFiringRate(){
    firingRate*=1.2;
    firingRateCost*=2;
}

void Tower::upgradeRange(){
    range*=1.2;
    rangeCost*=2;
}

