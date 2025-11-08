class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int availableSpots = n * n;
        int maxSpots = maxWeight / w;
        return min(maxSpots, availableSpots);
    }
};

// The containers have two limits:
//  1. No of containers available: n²
//  2. No of containers allowed due to weight limit: maxWeight / w
// Hence, the total number of containers we can place is minimum of these two

// Time Complexity: O(1)
// Space Complexity: O(1)