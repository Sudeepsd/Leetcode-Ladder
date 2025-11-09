class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int max1 = *max_element(nums1.begin(), nums1.end());
        int max2 = *max_element(nums2.begin(), nums2.end());

        return max2 - max1;
    }
};

// As all internal difference remain identical, only the elements are not 
// aligned, then the maximum (and minimum) values must also have the same 
// difference. Find the maximum element (or minimum element) of both arrays and
// return their difference. 

// Time Complexity: O(n), n = nums1.size = nums2.size; one pass to find max
// Space Complexity: O(1)
