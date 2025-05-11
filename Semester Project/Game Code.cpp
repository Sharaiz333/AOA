// Beginner-Level CSO: Drone Delivery Optimization (Fixed Delivery Spot)
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

// Total number of drones (cats)
const int NUM_DRONES = 3;
const int MAX_ITER = 20;
const int DELIVERY_X = 7;
const int DELIVERY_Y = 5;

// Function to calculate distance to delivery spot
float distance(int x, int y) {
    return sqrt((x - DELIVERY_X) * (x - DELIVERY_X) + (y - DELIVERY_Y) * (y - DELIVERY_Y));
}

struct Drone {
    int x;
    int y;
    float fitness;
};

void initDrone(Drone &d) {
    d.x = rand() % 15; // 0 to 14
    d.y = rand() % 15;
    d.fitness = distance(d.x, d.y);
}

void moveDrone(Drone &d) {
    int newX = d.x + (rand() % 3 - 1); // -1, 0, or 1
    int newY = d.y + (rand() % 3 - 1);

    if (newX < 0) newX = 0;
    if (newX > 14) newX = 14;
    if (newY < 0) newY = 0;
    if (newY > 14) newY = 14;

    float newFitness = distance(newX, newY);
    if (newFitness < d.fitness) {
        d.x = newX;
        d.y = newY;
        d.fitness = newFitness;
    }
}

int main() {
    srand(time(0));
    Drone drones[NUM_DRONES];

    // Initialize drones at random positions
    for (int i = 0; i < NUM_DRONES; i++) {
        initDrone(drones[i]);
    }

    // Run optimization
    for (int iter = 0; iter < MAX_ITER; iter++) {
        cout << "\nTurn " << iter + 1 << ":\n";
        for (int i = 0; i < NUM_DRONES; i++) {
            moveDrone(drones[i]);
            cout << "Drone " << i + 1 << " at (" << drones[i].x << ", " << drones[i].y << ") | Distance: " << drones[i].fitness << endl;
        }
    }

    return 0;
}

