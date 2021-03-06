/*
Project Group: Chris Groce, Kevin McGinn, Nick Taylor
CSE 20212
First version: 3/20/2012
Final Revision: 5/2/2012

Enemy.h

This is the interface for the Enemy abstract base class

This base class includes all of the information and functions needed
for all the types of enemies: moving, getting properties, etc.

*/

#ifndef ENEMY_H
#define ENEMY_H

#include <vector>

using namespace std;

class Enemy
{
 public:
  
  Enemy(int, int); //constructor
  //member functions
  virtual void takeDamage(int, char) = 0; //take damage of raw value and type (pure virtual)
  char nextSpace(vector<vector<char > >); //determines enemy's next space without moving it'
  void move(vector<vector<char> >); //moves the enemy to next spot on path
  int getPosX(); //returns x position of enemy
  int getPosY(); //returns y position of enemy
  int isDead(); //returns whether or not enemy is dead
  int getSpeed(); //returns speed of the enemy
  int getHealth(); //returns health of the enemy
  int getMaxHealth(); //returns max health of the enemy
  char getEnemyType(); //returns type of the enemy
  int getEnemyValue(); //returns value of enemy
  void initHealth(int); //initializes enemy health
  void initSpeed(int); //initializes enemy speed
  void initType(char); //initializes enemy type
  void initValue(int); //intializes enemy value

 private:

  //data
  int maxHealth;
  int health;
  int speed; //NOTE: LOWER NUMBER IS FASTER; speed corresponds to how many frames it takes for enemy to move one tile
  int xPos; //current x position
  int yPos; //current y position
  int xPrev; //previous x position
  int yPrev; //previous y position
  char enemyType; //type of enemy (p for Puny, s for Speedy, h for Heavy)
  int enemyValue; //amount of money player gets for killing enemy

protected:
  void loseHealth(int); //enemy loses inputted amount of health
};
#endif
