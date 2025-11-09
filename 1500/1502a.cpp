class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        int maxVal = *max_element(arr.begin(), arr.end());
        int minVal = *min_element(arr.begin(), arr.end());

        if (maxVal == minVal)
            return true;

        if ((maxVal - minVal) % (n - 1) != 0)
            return false;
        int diff = (maxVal - minVal) / (n - 1);
            
        unordered_set<int> series(arr.begin(), arr.end());
        for (int i = 0; i < n; ++i) {
            if (!series.count(minVal + i * diff))
                return false;
        }
        return true;
    }
};

// Mathematical Approach:
// We know that `diff = (maxVal - minVal) / (n - 1)`, and every element in the 
// AP must be: `minVal + i * diff` for i = 0,1,2,...,n-1.
// So, if all these expected values exist in input array, it can be formed into
// an AP.
// Special case: For `maxVal == minVal`, i.e., all elements are same, then it 
// is an AP with `diff = 0`.
// If `maxVal - minVal` is not divisible by `n - 1`, then we can't have integer
// steps to form an AP.

// Time Complexity: O(n), n = arr.size(); one pass for min/max, one pass to 
//      build set, one pass for verification.
// Space Complexity: O(n), unordered set stores unique elements.