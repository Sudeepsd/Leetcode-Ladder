class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> freq(101);

        for (int x : nums)  // O(n)
            ++freq[x];

        for (int i = 1; i < 101; ++i)   // O(k), k = 101 (constant)
            freq[i] += freq[i - 1];

        vector<int> ans;
        ans.reserve(nums.size());
        
        for (int x : nums)  // O(n)
            ans.push_back(x == 0 ? 0 : freq[x - 1]);

        return ans;
    }
};

// Frequency Counting + Prefix Sum Approach: O(n)
// We store the frequency of all the elements. Now, for the any number `x`, the
// number of smaller elements = sum of frequency of all elements < `x`. For 
// this we will use cumulative sum of all frequencies. 

// Note: The method only works because of fixed small range: 0 ≤ nums[i] ≤ 100.

// Time Complexity: O(n + k) = O(n), n = nums.size, k = 101
// Space Complexity: O(n + k)