// https://leetcode.com/problems/palindrome-linked-list/

// TC: O(n) O(1) but we modified the original LL~ (we can reverse the other half again to get the original LL)

// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         // we will use slow and fast pointers to get to the middle of the LL and then reverse the LL from middle till end 
//         // and then check if node values are same~

//         ListNode *slow = head, *fast = head;

//         while(fast->next && fast->next->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }

//         // now reverse from middle till end~
//         ListNode *prev = NULL, *curr = slow->next, *second = NULL;
//         while(curr) {
//             second = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = second;
//         }

//         // now check from the tail till the slow pointer if vals are same~
//         ListNode *p1 = head, *p2 = prev;

//         while(p2) {
//             if(p1->val != p2->val) return false;
//             p1 = p1->next;
//             p2 = p2->next;
//         }

//         return true;
//     }
// };