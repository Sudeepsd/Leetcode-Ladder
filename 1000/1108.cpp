class Solution {
public:
    string defangIPaddr(string address) {
        string res;
        for (char c : address) {    // O(n)
            if (c == '.')
                res += "[.]";
            else    
                res += c;
        }
        return res;
    }
};

// Approach:
// We traverse the string and replace each '.' by "[.]" while keeping other 
// characters as-is.

// Time Complexity: O(n), n is length of string; traversed the string once
// Space Complexity: O(n); We build a new string whose length depends on input