//
// Created by leafy on 11/19/2026.
//

#include "../include/Map.h"

#include <sstream>

Map::Map() {
    this->size = 8;
    map.assign(size, vector<char>(size, '.'));
}

string Map::getMapStr(const vector<Obstacle>& obstacles) const {
    stringstream ss;

    vector<vector<char>> grid = map;

    for (const auto& obstacle : obstacles) {
        grid[obstacle.y][obstacle.x] = '#';
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            ss << " " << grid[j][i] << " ";
        }
        ss << i << endl;
    }
    for (int i = 0; i < size; i++) {
        ss << " " << i << " ";
    }

    return ss.str();
}