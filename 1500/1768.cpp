class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;

        int i = 0;
        while (i < word1.length() && i < word2.length()) {
            ans += word1[i];
            ans += word2[i];
            ++i;
        }

        ans += word1.substr(i);
        ans += word2.substr(i);

        return ans;
    }
};

// For an index `i` to iterate through both strings simultaneously and append 
// `word1[i]` and `word2[i]` alternately. When one string finishes, append 
// the remaining substring from the longer string.

// Time Complexity: O(n + m), n = word1.size, m = word2.size; 
//      Traversing both strings once
// Space Complexity: O(n + m), Uses extra string