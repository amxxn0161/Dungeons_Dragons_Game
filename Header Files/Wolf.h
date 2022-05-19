#ifndef OBJECT_ORIENTED_PROGRAMMING_CLION_WOLF_H
#define OBJECT_ORIENTED_PROGRAMMING_CLION_WOLF_H

#include <stdio.h>
#include <string>
#include "Wolf.h"
#include "Entity.h"

using namespace std;

class Wolf: public Entity{


public:
    void Display();
    string getName();
    int getMaxHealthPoints();
    void setMaxHealthPoints(int wolfMaxHealth);
    int getHealthPoints();
    void setHealthPoints(int value);
    int getAttackPoints();

private:
    string name = "Wolf";
    int healthPoints = 7;
    int maximumHealthPoints = 7;
    int attackPoints = 4;
};


#endif //OBJECT_ORIENTED_PROGRAMMING_CLION_WOLF_H
