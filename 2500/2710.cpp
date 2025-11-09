class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.length() - 1;
        while (n >= 0 && num[n] == '0')
           --n;

        return num.substr(0, n + 1);
    }
};

// We start from the last character, and keep moving backward until you find 
// first non-zero character, and return sub-string upto that point.

// Time Complexity: O(n), n = num.length; Atmost `n` characters traversed
// Space Complexity: O(n), Output string length