#ifndef OBJECT_ORIENTED_PROGRAMMING_CLION_GHOST_H
#define OBJECT_ORIENTED_PROGRAMMING_CLION_GHOST_H

#include <stdio.h>
#include <string>
#include "Entity.h"

class Ghost: public Entity{

public:
    void Display();
    string getName();
    int getMaxHealthPoints();
    void setMaxHealthPoints(int ghostMaxHealth);
    int getHealthPoints();
    void setHealthPoints(int value);
    int getAttackPoints();

private:
    string name = "Ghost";
    int healthPoints = 5;
    int maximumHealthPoints = 7;
    int attackPoints = 3;
};


#endif //OBJECT_ORIENTED_PROGRAMMING_CLION_GHOST_H
