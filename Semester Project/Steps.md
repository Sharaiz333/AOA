# CSO Drone Delivery - Algorithm Steps

## Step-by-Step Pseudocode

1. Define the target delivery location (e.g., (7,5)).
2. Initialize a population of drones (cats) with random positions on a grid.
3. For each drone, calculate the fitness (Euclidean distance to the target).
4. Repeat for a number of iterations:
   - For each drone:
     - Generate a nearby candidate move (in 8 directions or stay).
     - Calculate new fitness.
     - If the new position has better fitness, update the position.
5. Print final positions and distances.
