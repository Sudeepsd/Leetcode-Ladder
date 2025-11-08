class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if (nums.size() < 3) return -1;
        sort(nums.begin(), nums.begin() + 3);
        return nums[1];
    }
};

// The array (of distinct elements) will only have an element which is either 
// maximum or minimum if the size of array is atleast 3. Then we sort the first
// 3 elements and return the middle one.

// Time Complexity: O(1), Sorting only 3 elements regardless of array size
// Space Complexity: O(1)