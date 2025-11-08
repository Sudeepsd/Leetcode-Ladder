class Solution {
public:
    int smallestEvenMultiple(int n) {
        return n % 2 == 0 ? n : 2 * n;
    }
};

// If `n` is even, return `n` as it is multiple of 2 and multiple of itself.
// If `n` is odd, return `2*n` as it is the first even multiple of `n`.

// Time Complexity: O(1)
// Space Complexity: O(1)