#include "../Header Files/Ghost.h"
#include "../Header Files/Entity.h"

string Ghost::getName(){
    return name;
}

int Ghost::getHealthPoints(){
    return healthPoints;
}

int Ghost::getMaxHealthPoints(){
    return attackPoints;
}

int Ghost::getAttackPoints(){
    return attackPoints;
}

void Ghost::setHealthPoints(int value){
    healthPoints = value;
};

void Ghost::setMaxHealthPoints(int wolfMaxHealth){
    healthPoints = wolfMaxHealth;
};