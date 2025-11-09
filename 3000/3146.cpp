class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int> charIdx(26);
        int ans = 0;

        for (int i = 0; i < s.length(); ++i) {
            charIdx[s[i] - 'a'] = i;
        }

        for (int i = 0; i < t.length(); ++i) {
            ans += abs(charIdx[t[i] - 'a'] - i);
        }

        return ans;
    }
};

// Store the indices of each character of string `s`. For each character in 
// string `t`, find the absolute difference between the current index and the 
// index where the character is stored in `s`. Sum all absolute differences.

// Time Complexity: O(n), n = s.length = t.length; two linear scan
// Space Complexity: O(1), fixed-length array.