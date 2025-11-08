class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); ++i) {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};

// Intuition: One-Pass; In-Place
// The running sum upto index `i` is the sum of `nums[i]` and running sum up to
// index `i-1`.
// runningSum[i] = nums[0] + nums[1] + ... + nums[i - 1] + nums[i];
// runningSum[i - 1] = nums[0] + nums[1] + ... + nums[i - 1];
// Hence, runningSum[i] = runningSum[i - 1] + nums[i];
// By modifying `nums` in-place, we cut down unnecessary space.

// Time Complexity: O(n), where n is size of array; traversed the array once
// Space Complexity: O(1), in-place solution