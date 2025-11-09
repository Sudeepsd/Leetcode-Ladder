class Solution {
public:
    int maxPower(string s) {
        int ans = 1, curr = 1;
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] == s[i - 1])
                ++curr;
            else    
                curr = 1;
            
            ans = max(ans, curr);
        }

        return ans;
    }
};

// We keep track of how long the current streak of identical characters 
// continues as we scan the string. 

// Time Complexity: O(n), n = s.length; single pass through the string
// Space Complexity: O(1)