class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());
        return (nums[n - 1] * nums[n - 2]) - (nums[0] * nums[1]);
    }
};

// Sorting Approach - O(nlog₂n)
// The product difference is maximum when the two largest elements are 
// subtracted from the two smallest elements. We sort the array to easily 
// obtain the two largest and two smallest values.

// Note: As the constraints are too small, (nums.size <= 10^4). We can also use
// sorting method to effectively find the solution.

// Time Complexity: O(nlog₂n), n = nums.size(); Sorting takes nlog₂n time.
// Space Complexity: O(1)