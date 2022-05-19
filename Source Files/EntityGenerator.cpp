#include "../Header Files/EntityGenerator.h"
#include "../Header Files/Goblin.h"
#include "../Header Files/Monk.h"
#include "../Header Files/Entity.h"
#include "../Header Files/Wolf.h"
#include "../Header Files/Ghost.h"
#include "../Header Files/NumberGenerator.h"


Entity* EntityGenerator::createEntity(int a){ //Generates Entity
    if (a == 1) {
        return new Goblin();
    }
    else if (a == 2) {
        return new Wolf();
    }
    else if (a == 3) {
        return new Ghost();
    }
    else
        return new Goblin();
}

