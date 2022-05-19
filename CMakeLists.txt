cmake_minimum_required(VERSION 3.20)
project(Object_Oriented_Programming_CLion)

set(CMAKE_CXX_STANDARD 20)

add_executable(Object_Oriented_Programming_CLion
        "Source Files/EmptyRoom.cpp"
        "Header Files/EmptyRoom.h"
        "Source Files/Entity.cpp"
        "Header Files/Entity.h"
        "Source Files/Goblin.cpp"
        "Header Files/Goblin.h"
        "Source Files/Monk.cpp"
        "Header Files/Monk.h"
        "Source Files/Mediator.cpp"
        "Header Files/Mediator.h"
        "Source Files/MonsterRoom.cpp"
        "Header Files/MonsterRoom.h"
        "Source Files/NumberGenerator.cpp"
        "Header Files/NumberGenerator.h"
        "Source Files/Room.cpp"
        "Header Files/Room.h"
        "Source Files/TreasureRoom.cpp"
        "Header Files/TreasureRoom.h"
        "Source Files/UpgradeRoom.cpp"
        "Header Files/UpgradeRoom.h"
        "Source Files/EntityGenerator.cpp"
        "Header Files/EntityGenerator.h"
        "Source Files/Wolf.cpp"
        "Header Files/Wolf.h"
        "Source Files/RoomGenerator.cpp"
        "Header Files/RoomGenerator.h"
        "Source Files/GameCLI.cpp"
        "Header Files/GameCLI.h"
        "Source Files/Ghost.cpp"
        "Header Files/Ghost.h")
