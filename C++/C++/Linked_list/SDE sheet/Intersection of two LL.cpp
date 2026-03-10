// https://leetcode.com/problems/intersection-of-two-linked-lists/

// TWO METHODS~ (BOTH HAVE SAME TC AND SC BUT SECOND ONE IS MORE ELEGANT AND SHORT)

// LENGTH DIFFERENCE METHOD:

// ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         int lengthA = 0, lengthB = 0;
//         ListNode* temp = headA;

//         while(temp) {
//             lengthA++;
//             temp = temp->next;
//         }

//         temp = headB;
//         while(temp) {
//             lengthB++;
//             temp = temp->next;
//         }

//         if(lengthA >= lengthB) {
//             int gap = lengthA - lengthB;

//             // we have to move "gap" nodes ahead in A to to the same length as B~
//             for(int i = 0; i < gap; i++) {
//                 headA = headA -> next;
//             }
//         }

//         else{
//             int gap = lengthB - lengthA;
//             // we have to move "gap" nodes ahead in B to to the same length as A~
//             for(int i = 0; i < gap; i++) {
//                 headB = headB -> next;
//             }
//         }

//         while(headA && headB) {
//             if(headA == headB) return headA;
//             headA = headA->next;
//             headB = headB->next;
//         }

//         return NULL;
//     }

// TWO POINTER APPROACH~     technically same cheez hai cuz both pointers travel the same distance (A+B)
// "If I wander to the end of the world and still cannot find you, I will take another path and search anew."
// "And I shall do the same, my love."

// ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

//         ListNode* a = headA;
//         ListNode* b = headB;

//         while(a != b) {
//             a = (a == NULL) ? headB : a->next;
//             b = (b == NULL) ? headA : b->next;
//         }

//         return a;
// }