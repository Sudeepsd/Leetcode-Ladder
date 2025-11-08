class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int m = sentence.length(), n = searchWord.length();
        int wordIdx = 1, idx = 0;

        while (idx < m) {
            int i = 0;
            while (idx < m && i < n && sentence[idx] == searchWord[i]) {
                ++idx; ++i;
            }

            if (i == n) {
                return wordIdx;
            }

            while (idx < m && sentence[idx] != ' ')
                ++idx;

            ++wordIdx;
            ++idx;
        }

        return -1;
    }
};

// Low-level Approach:
// We scan character by character, and for each new word, check whether its 
// beginning matches `searchWord`.

// `idx` iterates through the `sentence`, word by word. `i` is used to compare
// characters of `searchWord`. As long as both characters match, move both 
// pointers forward. We found the prefix if all `n` characters of `searchWord`
// matched. If the prefix was not found, we move the `idx` to beginning of new
// word. 