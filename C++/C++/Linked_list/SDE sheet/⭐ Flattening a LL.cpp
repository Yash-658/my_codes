// This is the iterative approach, O(N*M) O(1)

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
