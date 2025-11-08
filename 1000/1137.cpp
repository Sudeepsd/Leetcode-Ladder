class Solution {
public:
    int tribonacci(int n) {
        int T[3] = {0, 1, 1};

        for (int i = 3; i <= n; ++i) {
            T[i % 3] = T[0] + T[1] + T[2];
        }

        return T[n % 3];
    }
};

// As each number only needs the last 3 numbers, we will reuse 3 variables in a
// circular manner. For each index `i`, we compute the tribonacci number, and 
// store it one of the 3 variables using `modulo indexing`. Since we used 
// modulo indexing, the result is also retrieved using modulo indexing.

// Time Complexity: O(n), n = n
// Space Complexity: O(1), array of fixed size