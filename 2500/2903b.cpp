class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + indexDifference; j < nums.size(); ++j) {
                if (abs(nums[j] - nums[i]) >= valueDifference)
                    return {i, j};
            }
        }

        return {-1, -1};
    }
};

// Brute Force Approach - O(n²)
// We check all possible pairs that satisfy the index gap condition. If we find
// any pair that satisfy the value difference condition, return it.

// As the problem constaints are small (nums.size <= 10⁴), we can use a brute
// force to give a simple code.

// Time Complexity: O(n²) - n = nums.size; Two nested loops
// Space Complexity: O(1)