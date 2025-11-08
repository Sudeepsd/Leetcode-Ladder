class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int count = 0;
        vector<int> freq(24);

        for (int h : hours) {
            h = h % 24;
            count += freq[(24 - h) % 24];
            ++freq[h];
        }

        return count;
    }
};

// Two hours make a complete day if (a + b) % 24 == 0. For each hour, we need 
// to count previous numbers that have the complement remainder needed to make
// a multiple of 24. Hence, to make (a + b) % 24 == 0, we need to check if
//  b % 24 == (24 - (a % 24)) % 24

// For current `h`, complement = (24 - h) % 24 which ensures that 
//  (h + complement) % 24 == 0. freq[(24 - h) % 24] counts how many previous 
// hours had that complement remainder. Increment the count of current 
// remainder for future pairs.

// Time Complexity: O(n), n = hours.size; array processed linearly
// Space Complexity: O(24) = O(1); fixed-size array