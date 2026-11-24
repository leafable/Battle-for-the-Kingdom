//
// Created by leafy on 11/19/2026.
//

#ifndef BATTLE_FOR_THE_KINGDOM_OBSTACLES_H
#define BATTLE_FOR_THE_KINGDOM_OBSTACLES_H
#include <random>
#include <vector>

using namespace std;

struct Obstacle {
    int x;
    int y;

    bool operator==(const Obstacle other) const {
        return x == other.x && y == other.y;
    }
};

class Obstacles {
private:
    vector<Obstacle> obstacles;
public:
    Obstacles(int numObstacles, mt19937& seed);
    bool isDuplicate(const Obstacle& obstacle2) const;
    bool isDiagonal(const Obstacle& obstacle2) const;
    const vector<Obstacle>& getObstacles() const;
};


#endif //BATTLE_FOR_THE_KINGDOM_OBSTACLES_H
