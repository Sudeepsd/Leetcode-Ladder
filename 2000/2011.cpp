class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;

        for (auto& op : operations) {
            if (op[1] == '+')
                ++X;
            else
                --X;
        }
        return X;
    }
};

// For each operation, the middle character determines whether to increment or 
// decrement.

// Time Complexity: O(n), n = operations.size
// Space Complexity: O(1)