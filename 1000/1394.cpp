class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freqMap;

        for (int x : arr) {
            ++freqMap[x];
        }

        int ans = -1;
        for (auto& [num, freq] : freqMap) {
            if (num == freq) {
                ans = max(ans, num);
            }
        } 
        return ans;
    }
};

// Count the frequency of each number. Check how many number equals the count 
// and return the maximum among them.

// Time Complexity: O(n), size of array; traversed the array linearly
// Space Complexity: O(n), hashmap stores upto n elements.