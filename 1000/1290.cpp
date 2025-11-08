/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        while (head != nullptr) {
            ans = ans * 2 + head->val;
            head = head->next;
        }
        return ans;
    }
};

// If Binary Value is a linked list of binary stream: b₀ b₁ b₂ ... bₖ,
// then Decimal Valueis given as: 
//      b₀ · 2ᵏ + b₁ · 2ᵏ⁻¹ + b₂ · 2ᵏ⁻² + … + bₖ · 2⁰
//    = (((b₀ * 2 + b₁) * 2 + b₂) * 2 + ...) * 2 + bₖ
// So each new bit value is incorporated as `ans = ans * 2 + val`

// Time Complexity: O(n), length of linked list
// Space Complexity: O(1)