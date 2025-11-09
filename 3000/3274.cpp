class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int col1 = coordinate1[0] - 'a', row1 = coordinate1[1] - '1';
        int col2 = coordinate2[0] - 'a', row2 = coordinate2[1] - '1';

        return (row1 + col1) % 2 == (row2 + col2) % 2;
    }
};

// We observe that the sum parity of `row + col` determines the color:
//  - Even -> Black
//  - Odd  -> White

// Time Complexity: O(1)
// Space Complexity: O(1)