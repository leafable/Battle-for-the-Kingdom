cmake_minimum_required(VERSION 4.3)
project(Battle_for_the_Kingdom)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
include_directories(src)

add_executable(Battle_for_the_Kingdom
        src/main.cpp
        src/Archer.cpp
        include/Archer.h
        src/Character.cpp
        include/Character.h
        src/Inventory.cpp
        include/Inventory.h
        src/Item.cpp
        include/Item.h
        src/Mage.cpp
        include/Mage.h
        src/Map.cpp
        include/Map.h
        src/Obstacles.cpp
        include/Obstacles.h
        src/Warrior.cpp
        include/Warrior.h
        src/System.cpp
        include/System.h)
