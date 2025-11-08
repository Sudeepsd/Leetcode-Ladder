class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;

        for (int x : hours) {
            if (x >= target)
                ++count;
        }

        return count;
    }
};

// Return the count of how many element have value greater than or equal to 
//  `target`.

// Time Complexity: O(n)
// Space Complexity: O(1)