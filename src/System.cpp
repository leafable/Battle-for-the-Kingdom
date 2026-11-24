//
// Created by leafy on 11/19/2026.
//

#include "../include/System.h"

#include <iostream>

int System::randomSeed = static_cast<int>(random_device{}());

System::System() : seed(randomSeed), obstacles(defaultNumObstacles, seed) {

}

void System::printMap() const {
    cout << map.getMapStr(obstacles.getObstacles());
}

void System::runProcess() {
    printMap();
}