#ifndef OBJECT_ORIENTED_PROGRAMMING_CLION_UPGRADEROOM_H
#define OBJECT_ORIENTED_PROGRAMMING_CLION_UPGRADEROOM_H

#include <stdio.h>
#include "Room.h"

class UpgradeRoom : public Room {

public:

    void roomOperation() override;
    void Display() override;
};

#endif //OBJECT_ORIENTED_PROGRAMMING_CLION_UPGRADEROOM_H
