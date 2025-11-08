class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = n - 1, k = n - 1;

        vector<int> ans(n);
        while (i <= j) {
            if (abs(nums[i]) > abs(nums[j])) {
                ans[k] = nums[i] * nums[i];
                --k; ++i;
            } else {
                ans[k] = nums[j] * nums[j];
                --k; --j;
            }
        }

        return ans;
    }
};

// Even though the elements are sorted, their squares are not necessarily 
// sorted. However, the largest square must either come from leftmost (most 
// negative) or rightmost (more positive). Hence, we compare the absolute 
// values.

// Use three pointers: leftmost, rightmost, and an index to fill the output 
// array from end to start. Compare absolute values at both ends, and place 
// the larger square at the current index. Move pointers inward accordingly.

// Time Complexity: O(n), size of input array; traversed the array linearly
// Space Complexity: O(n), size of output array