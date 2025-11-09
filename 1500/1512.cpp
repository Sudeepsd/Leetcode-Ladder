class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> freq(101);

        int ans = 0;
        for (int x : nums) {
            ans += freq[x];
            ++freq[x];
        }
        return ans;
    }
};

// When iterating through an array, the current element forms a pair with each 
// of its previous occurence. So, the number of good pair formed by current 
// element is equal to how many it has occurred before. Hence, we keep a 
// running track of frequency of each element, and count the pairs.

// As the constraints are small, 0 <= nums[i] <= 100, we can effectively use a
// vector of fixed size to track frequency of each element. If the constraints 
// were not restricted, we can use unordered_map instead.

// Time Complexity: O(n), n = nums.size; one pass through the array
// Space Complexity: O(101) = O(1); array of fixed-size