class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int i = 0; i < target.size(); ++i) {
            ++freq[target[i]];
            --freq[arr[i]];
        }

        for (auto f : freq) {
            if (f.second != 0)
                return false;
        }

        return true;
    }
};

// As we can reverse any sub-arrays of any size any number of times, we can 
// always reach from one array to another as long as they have the same set of 
// elements. So we check if they have the same elements by adding the frequency
// of all elements in first array, and subtracting the frequency of all 
// elements from the second array. If the overall frequency of all elements is
// 0, then the array have same set of elements.

// Time Complexity: O(n), n = target.size = arr.size
// Space Complexity: O(n), size of unordered_map is atleast `n`.