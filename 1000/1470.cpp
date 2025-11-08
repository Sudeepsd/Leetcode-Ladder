class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        result.reserve(2 * n);

        for (int i = 0; i < n; ++i) {   // O(n)
            result.push_back(nums[i]);
            result.push_back(nums[i + n]);
        }

        return result;
    }
};

// Take one element from the first half and one from the second half and place 
// them alternately into the new array.

// Time Complexity: O(n), n - size of input; traversed the array linearly
// Space Complexity: O(n), output array of same size.