class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;

        for (int x : nums) {    // O(n)
            if (x % 3 != 0)
                ++ans;
        }

        return ans;
    }
};

// If the number is divisible by 3, no operations are needed. If the number is 
// not divisible by 3, exactly one operations is needed. Hence, the number of 
// operations required is equal to how many numbers are not divisible by 3.

// Time Complexity: O(n), n = nums.size()
// Space Complexity: O(1)