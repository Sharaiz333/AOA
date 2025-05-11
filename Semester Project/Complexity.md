# CSO Drone Delivery - Complexity Analysis

## Time Complexity
**O(N × I)**  
- N = number of drones (cats)
- I = number of iterations  
- Each drone performs constant-time local search at each iteration.

## Space Complexity
**O(N)**  
- Each drone stores only position (x, y) and fitness value.

## Notes
- Efficient for small to medium grid sizes.
- Can be extended with tracing mode or additional state information.
