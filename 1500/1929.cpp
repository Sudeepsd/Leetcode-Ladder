class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans(2 * n);
        for (int i = 0; i < n; ++i) {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }

        return ans;
    }
};

// Create a new array `ans` of size `2*len`, where `len` is length of input 
// array `nums`. For each element at index `i`, assign `nums[i]` to `ans[i]` 
// and to `ans[i+len]`.

// Time Complexity: O(n), size of input array; traversed the array linearly
// Space Complexity: O(n), size of output array is directly proportional to 
//  size of input array.