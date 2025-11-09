class Solution {
public:
    char repeatedCharacter(string s) {
        int mask = 0;

        for (char c : s) {
            if (mask & 1 << (c - 'a'))
                return c;
            mask |= 1 << (c - 'a');
        }

        return '\0';
    }
};

// We use a bitmask where each bit corresponds a character. We set the bit, the
// first time we see the character corresponding it. If the bit was already 
// set, then the character already occurred and is the repeated character. 
// Using a hash set or frequency array  is also straightforward, but uses extra
// space.

// Time Complexity: O(n), n = s.length; One pass through the string
// Space Complexity: O(1)