class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int ans = 0;
        int left = 0, right = nums.size() - 1;
        while (left < right) {  // O(n)
            if (nums[left] + nums[right] < target) {
                ans += right - left;
                ++left;
            } else {
                --right;
            }
        }

        return ans;
    }
};

// Sorting arranges numbers in increasing order, so we can make decisions about
// sums quickly. If `nums[left] + nums[right] < target`, then all elements 
// between `left` and `right` will form a pair with `left`. Increasing 
// `nums[left]` will increase the sum. 

// Time Complexity: O(nlog₂n), Sorting dominates
// Space Complexity: O(1)