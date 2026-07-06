#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

// https://leetcode.com/problems/reverse-nodes-in-k-group/description/

// Iterative version: O(n) O(1), you have done recursive one too in previous submissions~

// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         // first check if there's a group with "k" nodes~
//         // reverse that k group~
//         // do this till the end of the LL~
//         if (k == 1) return head;

//         ListNode *temp = head, *newHead = head, *prevTail = NULL;
//         while(temp) {
//             ListNode* currHead = temp;

//             for (int i = 1; i < k; i++) {
//                 temp = temp->next;
//                 if (!temp) return newHead; // if there are no more groups with "k" nodes, return the newHead~
//             }

//             // this means if there's a group with "k" nodes~
//             // set value of newHead too~
//             if (newHead == head)
//                 newHead = temp;
//             ListNode *prev = temp->next, *first = currHead, *second = NULL;
//             while (prev != temp) {
//                 second = first->next;
//                 first->next = prev;
//                 prev = first;
//                 first = second;
//             }

//             // connecting reversed LLs
//             if (!prevTail)
//                 prevTail = currHead;
//             else {
//                 prevTail->next = prev;
//                 prevTail = currHead;
//             }

//             temp = second;
//         }

//         return newHead;
//     }
// };