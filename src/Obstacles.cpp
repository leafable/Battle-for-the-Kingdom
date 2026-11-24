//
// Created by leafy on 11/19/2026.
//

#include "../include/Obstacles.h"

#include <random>

Obstacles::Obstacles(const int numObstacles, mt19937& seed) {

    do {
        Obstacle candidate{};
        uniform_int_distribution<int> coordX(1, 6);
        uniform_int_distribution<int> coordY(1, 6);

        candidate = {coordX(seed), coordY(seed)};
        if (!isDuplicate(candidate) && !isDiagonal(candidate)) {
            obstacles.push_back(candidate);
        }
    } while (obstacles.size() < numObstacles);
}

bool Obstacles::isDuplicate(const Obstacle& obstacle2) const {
    for (const auto& obstacle1 : obstacles) {
        if (obstacle1 == obstacle2) {
            return true;
        }
    }
    return false;
}

bool Obstacles::isDiagonal(const Obstacle& obstacle2) const {

    for (const auto& obstacle1 : obstacles) {
        if (obstacle2.x == obstacle1.x - 1 && obstacle2.y == obstacle1.y - 1 ||
            obstacle2.x == obstacle1.x - 1 && obstacle2.y == obstacle1.y + 1 ||
            obstacle2.x == obstacle1.x + 1 && obstacle2.y == obstacle1.y - 1 ||
            obstacle2.x == obstacle1.x + 1 && obstacle2.y == obstacle1.y + 1) {
            return true;
        }
    }
    return false;
}

const vector<Obstacle>& Obstacles::getObstacles() const {
    return obstacles;
}
