class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        int rows = grid.size(), cols = grid[0].size();
        int row = 0, col = cols - 1;

        while (row < rows && col >= 0) {
            if (grid[row][col] < 0) {
                ans += (rows - row);
                --col;
            } else {
                ++row;
            }
        }

        return ans;
    }
};

// Stair-case Approach:
// We start from the top-right element.
// Logic 1: If the current element is negative, as columns are arranged in 
//  non-decreasing order, each element below the current element must also be 
//  negative. We can directly count the remaining negative elements in that 
//  columns using `rows - row`, where `rows` is number of rows, and `row` is
//  the current row. As all negative elements in current column are counted, we
//  move to the previous column.
// Logic 2: If the current element is not negative, as rows are arranged in
//  non-decreasing order, all elements to the left of current element must 
//  also be not negative. We move down to check the next element in the same 
//  column. 
// The loop stops when the current position goes out of bounds.


// Time Complexity: O(m + n), m & n are number of rows and cols in the grid
// Space Complexity: O(1)