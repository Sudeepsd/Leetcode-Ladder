class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if (words.size() != s.length())
            return false;

        for (int i = 0; i < words.size(); ++i) {
            if (s[i] != words[i][0])
                return false;
        }

        return true;
    }
};

// For each index `i`, check if the character at that index in `s` is equal to 
// first character of `words` at same index `i`. If not, return false.

// Time Complexity: O(n), n = s.length = words.size
// Space Complexity: O(1)