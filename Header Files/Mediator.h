#ifndef OBJECT_ORIENTED_PROGRAMMING_CLION_MEDIATOR_H
#define OBJECT_ORIENTED_PROGRAMMING_CLION_MEDIATOR_H

#include <stdio.h>
#include <string>
#include "MonsterRoom.h"
#include "UpgradeRoom.h"
#include "Monk.h"
#include "Goblin.h"
#include "EmptyRoom.h"
#include "TreasureRoom.h"
#include "Entity.h"
#include "Wolf.h"

class Mediator

{

public:
    void Pray();
    void MonkAttack(Entity *entity);
    void MonkDefend();
    void EntityDefend(Entity *entity);
    void EntityAttack(Entity *entity);
    void UpgradeHealthPoints();
    void UpgradeAttackPoints();

};

#endif //OBJECT_ORIENTED_PROGRAMMING_CLION_MEDIATOR_H
