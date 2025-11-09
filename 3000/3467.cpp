class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int even = 0;

        for (int x : nums) {
            if (x % 2 == 0)
                ++even;
        }

        for (int i = 0; i < even; ++i)
            nums[i] = 0;
        for (int i = even; i < nums.size(); ++i)
            nums[i] = 1;

        return nums;
    }
};

// We can count how many even numbers are present in the array. And fill the 
// array with that many 0's, and fill the remaining array with 1's.

// Time Complexity: O(n), Single pass through array
// Space Complexity: O(1), in-place output array