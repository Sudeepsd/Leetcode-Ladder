class Solution {
public:
    int averageValue(vector<int>& nums) {
        int total = 0, count = 0;

        for (int x : nums) {
            if (x % 6 == 0) {
                ++count;
                total += x;
            }
        }

        return count == 0 ? 0 : total / count;
    }
};

// All even numbers divisible by 3 are numbers that are multiple of 6. So, we 
// track the sum and count of numbers divisible by 6. Return the average if 
// such numbers exist.

// Time Complexity: O(n), n = nums.size
// Space Complexity: O(1)
