#include "../Header Files/Wolf.h"
#include "../Header Files/Entity.h"
#include <fstream>

string Wolf::getName(){
    return name;
}

int Wolf::getHealthPoints(){
    return healthPoints;
}

int Wolf::getMaxHealthPoints(){
    return attackPoints;
}

int Wolf::getAttackPoints(){
    return attackPoints;
}

void Wolf::setHealthPoints(int value){
    healthPoints = value;
};

void Wolf::setMaxHealthPoints(int wolfMaxHealth){
    healthPoints = wolfMaxHealth;
};

/*void Wolf::Display(){
    std::fstream file("Wolf.txt");

    if (file.is_open()) {
        std::cout << file.rdbuf();
        std::cout << "\n\n";
        file.close();
    }
    else {
        std::cout << "Error - File cannot be opened";
    }
} */
