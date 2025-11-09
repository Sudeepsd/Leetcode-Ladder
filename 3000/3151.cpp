class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for (int i = 1; i < nums.size(); ++i) {
            if ((nums[i] + nums[i - 1]) % 2 == 0)
                return false;
        }
        return true;
    }
};

// If the adjacent elements are of same parity, either odd-odd or even-even, 
// then their sum is always even. If not, their sum is always odd. So we check 
// if all sum of all adjacent pairs are odd or not.

// Time Complexity: O(n), n = nums.size
// Space Complexity: O(1)