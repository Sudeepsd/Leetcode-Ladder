class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int maxIdx = 0, minIdx = 0;

        for (int i = indexDifference; i < nums.size(); ++i) {
            int j = i - indexDifference;

            if (nums[j] > nums[maxIdx]) maxIdx = j;
            if (nums[j] < nums[minIdx]) minIdx = j;

            if (abs(nums[i] - nums[maxIdx]) >= valueDifference)
                return {i, maxIdx};
            if (abs(nums[i] - nums[minIdx]) >= valueDifference)
                return {i, minIdx};
        }

        return {-1, -1};
    }
};

// Sliding Window Approach - O(n)
// For each index `i`, we look backwards at the elements that are atleast `d` 
// elements away. The `valueDifference` is easier to reach if we take the 
// absolute difference between the current element with either the largest 
// element or smallest element of all the elements that are atleast `d` away.
// As we move from left to right, we linearly maintain the max and min elements
// seen so far.

// Time Complexity: O(n), n = nums.size; each element processed once
// Space Complexity: O(1)