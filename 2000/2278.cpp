class Solution {
public:
    int percentageLetter(string s, char letter) {
        int letterCount = 0;

        for (char c : s) {
            if (c == letter)
                ++letterCount;
        }

        return letterCount * 100 / s.length();
    }
};

// The percentage of a letter is given by 
//  (number of letter / total number of letters) * 100

// Time Complexity: O(n), n = s.length
// Space Complexity: O(1)