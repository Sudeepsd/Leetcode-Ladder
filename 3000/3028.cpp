class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int count = 0, pos = 0;
        for (int x : nums) {
            pos += x;
            if (pos == 0)
                ++count;
        }
        return count;
    }
};

// We need to calculate how many times we return to position 0 after the start
// Keep a track of counter and current position. For each number in the array, 
// add it our current position. If the current position is 0, increase the 
// counter. Return the counter at the end.

// Time Complexity: O(n), n = size of array; traversed the array once
// Space Complexity: O(1), two variables used regardless of array size