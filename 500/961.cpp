class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> seen;

        for (int x : nums) {
            if (seen.count(x))
                return x;
            seen.insert(x);
        } 
        return -1;
    }
};

// As exactly one element is repeated multiple times, the first time it repeats
// it is guaranteed to be the repeated one. 

// Time Complexity: O(n), n = nums.size; each element processed once
// Space Complexity: O(n), size of the unordered set.