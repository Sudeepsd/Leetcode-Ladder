class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int x : nums) {
            if ((int)log10(x) % 2 == 1)
                ++count;
        }

        return count;
    }
};

// The number of digits in `n` is given by `log₁₀(n) + 1`. Hence, we check if 
// `log₁₀(n) + 1` is even, or `log₁₀(n)` is odd, and count them for our result.

// Time Complexity: O(n), n = nums.size
// Space Complexity: O(1)