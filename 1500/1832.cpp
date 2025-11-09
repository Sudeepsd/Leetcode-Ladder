class Solution {
public:
    bool checkIfPangram(string sentence) {
        int mask = 0;

        for (char c : sentence) {
            mask |= 1 << (c - 'a');
        }

        return mask == (1 << 26) - 1;
    }
};

// We use a bitmask in which each bit corresponding to a character. At the end,
// we check if all such bits are set.

// Time Complexity: O(n), n = sentence.length; Pass through string once
// Space Complexity: O(1)