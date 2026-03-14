// https://leetcode.com/problems/rotate-list/

// TC: O(2N) SC: O(1)

// class Solution {
// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         int length = 0;
//         ListNode* temp = head, *last = NULL;

//         while(temp) {
//             length++;
//             if(!temp->next) last = temp;
//             temp = temp->next;
//         }

//         if(length == 0) return head;
//         k = k%length;             // as when k >= length, after rotation it will be same as k %= length
//         if(k == 0) return head;   // as its possible k is a multiple of length itself so no sense of rotation~

//         // now, remove the link of the "(n-k)th" node~
//         temp = head;
//         for(int i = 0; i < length-k-1; i++) {
//             temp = temp->next;
//         }

//         ListNode *newHead = temp->next;
//         temp->next = NULL;

//         // now link the last node to the head node~
//         last->next = head;
//         return newHead;
//     }
// };