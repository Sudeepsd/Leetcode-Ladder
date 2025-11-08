class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0], b = nums[1], c = nums[2];

        if (a + b <= c || b + c <= a || c + a <= b)
            return "none";

        if (a == b && a == c)
            return "equilateral";
        
        if (a == b || a == c || b == c)
            return "isosceles";

        return "scalene";
    }
};

// Logic 1: All triangles must follow the triangle inequality rule which states
//  that sum of any two sides must always be greater than the third side. If it
//  doesn't follow it is not a triangle.
// Logic 2: A triangle is equilateral, if all three sides are equal.
// Logic 3: A triangle is isosceles, if any two sides are equal.
// Logic 4: A triangle that is neither equilateral nor isosceles is scalene.

// Time Complexity: O(1)
// Space Complexity: O(1)
