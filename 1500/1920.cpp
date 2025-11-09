class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        ans.reserve(nums.size());

        for (int x : nums) {
            ans.push_back(nums[x]);
        }

        return ans;
    }
};

// Just Simulate

// Time Complexity: O(n), n = nums.size; each element processed once
// Space Complexity: O(n)