class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int equal = 0, smaller = 0;

        for (int x : nums) {
            if (x < target) ++smaller;
            else if (x == target) ++equal;
        }

        vector<int> ans;
        for (int i = smaller; i < smaller + equal; ++i)
            ans.push_back(i);

        return ans;
    }
};

// After sorting all elements smaller than `target` come first and then all 
// `target` elements will appear. The first index of `target` will be number of
// elements smaller than `target`, and its last index will be `smaller + equal
// - 1`. So, calculate `smaller` and `equal` in single loop. Return indices 
// from first index to last index. 

// Time Complexity: O(n), n = nums.size
// Space Complexity: O(n)