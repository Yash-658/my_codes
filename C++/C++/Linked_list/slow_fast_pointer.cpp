#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

// Middle Of Linked List

 class ListNode {

    public: 
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) { 

        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast != NULL) {
            if(fast->next == NULL) {
                fast = NULL;
                slow = slow->next;
                break;
            }

            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
};


int main(){
return 0;
}