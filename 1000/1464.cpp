class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = INT_MIN, second = INT_MIN;

        for (int x : nums) {
            if (x >= largest) {
                second = largest;
                largest = x;
            } else if (x > second) {
                second = x;
            }
        }

        return (largest - 1) * (second - 1);
    }
};

// As all the values are positive, the maximum product is given by product of 
// first and second largest element in the array.

// We use two variables to keep track of first and second largest element we 
// have encountered so far. For each element, if the current element is larger 
// than largest, then it becomes the largest and largest becomes the second 
// largest. Otherwise, if it is greater than the second largest, it is now the
// second largest.

// Time Complexity: O(n), n - size of array; traversed the array linearly
// Space Complexity: O(1)