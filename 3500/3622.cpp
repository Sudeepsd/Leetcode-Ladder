class Solution {
public:
    bool checkDivisibility(int n) {
        int digitSum = 0, digitProd = 1;
        int x = n;

        while (x > 0) {
            int digit = x % 10;     // Get the last digit
            x /= 10;    // Remove the last digit
            digitSum += digit;
            digitProd *= digit;
        }

        return n % (digitSum + digitProd) == 0;
    }
};

// We iterate through the number digit by digit, and obtain the sum of digits 
// and the product of digits. Then we check if the original number is divisible
// by the sum of sum of digits and product of digits.

// Time Complexity: O(log₁₀n), n = n; Number of digits in n = log₁₀n + 1.
// Space Complexity: O(1)