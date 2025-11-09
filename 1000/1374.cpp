class Solution {
public:
    string generateTheString(int n) {
        string ans(n, 'a');

        if (n % 2 == 0)
            ans[0] = 'b';

        return ans;
    }
};

// If `n` is odd, return a string of `n` 'a's
// If `n` is even, return a string of 1 'b' followed by `n-1` 'a's

// Time Complexity: O(n), n = n; String of length `n` created
// Space Complexity: O(n), n = n; Output string storage