class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int largest = INT_MIN, secondLargest = INT_MIN;
        int smallest = INT_MAX, secondSmallest = INT_MAX;

        for (int x : nums) {
            if (x >= largest) {
                secondLargest = largest;
                largest = x;
            } else if (x > secondLargest) {
                secondLargest = x;
            }

            if (x <= smallest) {
                secondSmallest = smallest;
                smallest = x;
            } else if (x < secondSmallest) {
                secondSmallest = x;
            }
        }

        return (largest * secondLargest) - (smallest * secondSmallest);
    }
};

// Single Scan Approach - O(n)
// The product difference is maximum when the two largest elements are 
// subtracted from the two smallest elements. We track these elements in one 
// single scan.

// Start with extreme initial values. Iterate through the array and update the 
// largest and smallest values. If current `x` ≥ current largest, shift largest
// down to second largest. Else if it's only greater than second largest, 
// update it. Use the same logic in reverse for two smallest numbers. 

// Time Complexity: O(n), n = nums.size
// Space Complexity: O(1)