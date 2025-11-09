class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int aNb = 0;

        for (int x : nums) aNb ^= x;
        for (int i = 0; i < nums.size() - 2; ++i) aNb ^= i;

        int lsb = ~(aNb - 1) & aNb;

        int a = 0;
        for (int x : nums) {
            if (x & lsb)
                a ^= x;
        }

        for (int i = 0; i < nums.size() - 2; ++i) {
            if (i & lsb)
                a ^= i;
        }

        int b = aNb ^ a;
        return {a, b};
    }
};

// The XOR has two useful properties: x ^ 0 = x, x ^ x = 0. So if we XOR each 
// number from 0...n-1, then XOR each `nums` element, the 0...n-1 will cancel 
// each other out with only XOR of two repeated numbers remaining. The two 
// numbers must have atleast one different bit. We call this bit as `lsb`, 
// which is the rightmost bit that is different among the two numbers. 
// We split the `nums` into two groups, depending if their `lsb` is 0 or 1.
// The two numbers cannot be in the same group. XOR each group separately and 
// all numbers cancel out yielding the two repeated numbers.

// Time Complexity: O(n), n = nums.size; Single-pass through the array
// Space Complexity: O(1)