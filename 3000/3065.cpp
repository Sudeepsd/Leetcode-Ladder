class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;

        for (int x : nums) {
            if (x < k)
                ++count;
        }

        return count;
    }
};

// We make all elements ≥ k, by removing all elements < k. Number of operation 
// required to do that is equal to number of elements < k.

// Time Complexity: O(n), n = nums.size; array iterated linearly
// Space Complexity: O(1)