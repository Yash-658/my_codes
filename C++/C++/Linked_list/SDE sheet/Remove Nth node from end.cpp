// https://leetcode.com/problems/remove-nth-node-from-end-of-list/

// TC: O(n) SC: O(n)    but its two pass~ (NOT ELEGANT)

// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {   // we will turn this question into deleting xth note from the front~
//         int total = 0;
//         ListNode *temp = head;

//         while(temp) {
//             total++;
//             temp = temp->next;
//         }
        
//         int xth = total-n+1;

//         if(xth == 1) {
//             // that means we have to delete first node~
//             temp = head->next;
//             delete head;
//             return temp;
//         }

//         temp = head;
//         for(int i = 2; i < xth; i++) {
//             temp = temp->next;     // came to the previous node of the node we want to delete~
//         }

//         ListNode* toDelete = temp->next;
//         temp->next = temp->next->next;
//         delete toDelete;
//         return head;
//     }
// };

// MOST ELEGANT APPROACH~ ONE PASS SOLUTION~

// krlena khudse~

