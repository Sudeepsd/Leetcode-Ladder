class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream stream(sentence);
        string word;

        int wordIdx = 1;
        while (stream >> word) {
            if (word.starts_with(searchWord))
                return wordIdx;

            ++wordIdx;
        }
        return -1;
    }
};

// Stream-based Approach:
// Split the sentence into multiple words based on ' ' using `istringstream`. 
// Then for each word, check if it starts with the `searchWord`.

// Time Complexity: O(n), each character is processed once by `istringstream`
// Space Complexity: O(k), k - length of largest word; extracted words are 
// temporarily stored