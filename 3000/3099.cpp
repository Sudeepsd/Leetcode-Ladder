class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int digitSum = 0, n = x;
        while (n > 0) { // O(log₁₀ n)
            int digit = n % 10;
            n /= 10;
            digitSum += digit;
        }

        return x % digitSum == 0 ? digitSum : -1;
    }
};

// Approach:
// Store the original number to check divisibility later. Compute the sum of 
// digits by repeatedly taking the last digit (x % 10) and removing it 
// (x /= 10). Return the sum if the sum is divisible by original number.

// Time Complexity: O(log₁₀ x), numbers of digits of n is given by log₁₀(n) + 1.
// Space Complexity: O(1)