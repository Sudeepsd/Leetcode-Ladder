class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted(nums.begin(), nums.end());
        sort(sorted.begin(), sorted.end());     // O(nlog₂n)

        for (int i = 0; i < nums.size(); ++i) {     // O(n)
            int target = nums[i];
            int low = 0, high = nums.size() - 1;

            while (low < high) {    // O(log₂n)
                int mid = low + (high - low) / 2;
               
                if (sorted[mid] < target)
                    low = mid + 1;
                else
                    high = mid;
            }

            nums[i] = low;
        }

        return nums;
    }
};

// Sorting + Binary Approach: O(nlog₂n)
// For a given value, its first position in a sorted array gives the number of 
// elements smaller than it. Then, for each element in the original array, we 
// find its lower-bound index in the sorted array using binary search. Return 
// vector of lower-bound indices.

// This is the most optimal approach in general case, if no constraints given.

// Time Complexity: O(nlog₂n), 
//      Sort: O(nlog₂n)
//      Binary Search for `n` elements: O(nlog₂n)
// Space Complexity: O(n)