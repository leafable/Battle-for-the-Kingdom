//
// Created by leafy on 11/19/2026.
//

#ifndef BATTLE_FOR_THE_KINGDOM_SYSTEM_H
#define BATTLE_FOR_THE_KINGDOM_SYSTEM_H
#include <random>
#include "Obstacles.h"
#include "Map.h"

using namespace std;

class System {
private:
    void printMap() const;
public:
    mt19937 seed;
    static int randomSeed;
    static constexpr int defaultNumObstacles = 5;

    Map map;
    Obstacles obstacles;

    System();
    void runProcess();
};


#endif //BATTLE_FOR_THE_KINGDOM_SYSTEM_H
