class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int ans = 0;

        for (int i = 0; i < startTime.size(); ++i) {
            if (queryTime >= startTime[i] && queryTime <= endTime[i])
                ++ans;
        }

        return ans;
    }
};

// A student is doing their homework at `queryTime` if 
//      startTime ≤ queryTime ≤ endTime.

// Time Complexity: O(n), size of array; traversed the array linearly
// Space Complexity: O(1)