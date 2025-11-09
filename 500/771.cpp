class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        uint64_t mask = 0;
        int ans = 0;

        for (char c : jewels) {
            int pos = (c >= 'a') ? (26 + c - 'a') : c - 'A';
            mask |= (1ULL << pos);
        }

        for (char c : stones) {
            int pos = (c >= 'a') ? (26 + c - 'a') : c - 'A';
            if (mask & (1ULL << pos)) 
                ++ans;
        }

        return ans;
    }
};

// Use a bitmask, where each bit corresponds to a character. Set all the bits 
// corresponding to each jewels. For each stone, check if their corresponding 
// bit is set, and return the count.

// Time Complexity: O(m * n), where m and n are length of strings
// Space Complexity: O(1)