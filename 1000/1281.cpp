class Solution {
public:
    int subtractProductAndSum(int n) {
        int digitSum = 0, digitProd = 1;

        while (n > 0) {
            int digit = n % 10; // Get the last digit
            n /= 10;    // Remove the last digit

            digitSum += digit;
            digitProd *= digit;
        }

        return digitProd - digitSum;
    }
};

// We remove each digit one by one, and find the sum of digits and product of
// digits. Then, return the difference between them.