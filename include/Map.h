//
// Created by leafy on 11/19/2026.
//

#ifndef BATTLE_FOR_THE_KINGDOM_MAP_H
#define BATTLE_FOR_THE_KINGDOM_MAP_H
#include <string>
#include <vector>
#include "Obstacles.h"

using namespace std;

class Map {
private:
    vector<vector<char>> map;
    int size;
public:
    Map();
    string getMapStr(const vector<Obstacle>& obstacles) const;
};


#endif //BATTLE_FOR_THE_KINGDOM_MAP_H
