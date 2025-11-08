class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(), target.end()); // O(nlog₂n)
        sort(arr.begin(), arr.end());       // O(nlog₂n)

        return target == arr;   // O(n)
    }
};

// Sorting Approach:
// As we can reverse any sub-arrays of any size any number of times, we can 
// always reach from one array to another as long as they have the same set of 
// elements. So we sort both the arrays and check if both arrays match.

// Time Complexity: O(nlog₂n)
//      Comparison takes n time
//      Sorting takes nlog₂n time
// Space Complexity: O(1)