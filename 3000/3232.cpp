class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int num1 = 0;
        int num10 = 0;

        for (int x : nums) {
            if (x < 10) num1 += x;
            else num10 += x;
        }

        return num1 != num10;
    }
};

// Alice can directly choose whichever sum is greater than the other and win. 
// The only way she cannot win is if the sum of both are equal.

// Time Complexity: O(n), n = nums.size; Single-pass
// Space Complexity: O(1)