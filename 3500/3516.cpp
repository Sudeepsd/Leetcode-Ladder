class Solution {
public:
    int findClosest(int x, int y, int z) {
        if (abs(z - x) < abs(z - y))
            return 1;
        else if (abs(z - x) > abs(z - y))
            return 2;
        return 0;
    }
};

// The one with smaller distance will arrive at `z` first. If both distances 
// are equal, they reach at the same time.

// Time Complexity: O(1)
// Space Complexity: O(1)