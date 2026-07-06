// MOST ELEGANT: Divide & conquer (like merge sort, merging in pairs) TC: O(K log N)  SC: O(log N)
// ⭐⭐⭐ here K = total no. of nodes~

// Node* mergeLL(Node* first, Node* second) {
// 	Node* dummy = new Node(-1), *temp = dummy;

// 	while(first && second) {
// 		if(first->data > second->data) {
// 			temp->child = second;
// 			second = second->child;
// 		}

// 		else{
// 			temp->child = first;
// 			first = first->child;
// 		}

// 		temp = temp->child;
// 		temp->next = NULL;
// 	}

// 	while(first) {
// 		temp->child = first;
// 		temp = temp->child;
// 		temp->next = NULL;
// 		first = first->child;
// 	}

// 	while(second) {
// 		temp->child = second;
// 		temp = temp->child;
// 		temp->next = NULL;
// 		second = second->child;
// 	}

// 	temp = dummy->child;
// 	delete dummy;
// 	return temp;
// }

// Node* findMiddle(Node* head) {
// 	Node* slow = head, *fast = head;

// 	while(fast->next && fast->next->next) {
// 		fast = fast->next->next;
// 		slow = slow->next;
// 	}

// 	return slow;
// }

// Node* flattenLinkedList(Node* head) 
// {
// 	if(!head || !head->next) return head;

// 	// find middle~
// 	Node* mid = findMiddle(head);

// 	// split~
// 	Node* second = mid->next;
// 	mid->next = NULL;

// 	Node* first = flattenLinkedList(head);
// 	second = flattenLinkedList(second);

// 	// now merge~
// 	return mergeLL(first, second);
// }

// This is Sequential merging, O(K * N) O(1)    >> here K = total no. of nodes~

// Node* mergeLL(Node* first, Node* second) {
// 	Node* dummy = new Node(-1), *temp = dummy;

// 	while(first && second) {
// 		if(first->data > second->data) {
// 			temp->child = second;
// 			second = second->child;
// 		}

// 		else{
// 			temp->child = first;
// 			first = first->child;
// 		}

// 		temp = temp->child;
// 		temp->next = NULL;
// 	}

// 	while(first) {
// 		temp->child = first;
// 		temp = temp->child;
// 		temp->next = NULL;
// 		first = first->child;
// 	}

// 	while(second) {
// 		temp->child = second;
// 		temp = temp->child;
// 		temp->next = NULL;
// 		second = second->child;
// 	}

// 	temp = dummy->child;
// 	delete dummy;
// 	return temp;
// }

// Node* flattenLinkedList(Node* head) 
// {
// 	Node* second = head->next, *temp = NULL;

// 	while(second) {
// 		temp = second->next;
// 		head = mergeLL(head, second);

// 		second = temp;
// 	}

// 	return head;
// }


