class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> ans;

        for (int i = 1; i < height.size(); ++i) {
            if (height[i - 1] > threshold)
                ans.push_back(i);
        }

        return ans;
    }
};

// Just Simulate

// Time Complexity: O(n), n = height.size; Single pass only
// Space Complexity: O(1)