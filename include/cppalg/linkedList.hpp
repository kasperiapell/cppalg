// include/cppalg/linkedList.hpp

/*
*
* Floyd's cycle-finding algorithm
*
* Operates on a linked list where the nodes have the following form
*
* struct Node {
*	int val;
*	Node* next;
*	Node(int x) : val(x), next(NULL) {}
* };
*
*/
namespace linkedList {
	bool hasCycleFloyd(Node *head) {
		if (head == nullptr) { return false; }

		Node* slowPtr = head;
		Node* fastPtr = head;

		while (slowPtr != nullptr && fastPtr != nullptr && fastPtr->next != nullptr) {
			slowPtr = slowPtr->next;
			fastPtr = fastPtr->next->next;

			if (slowPtr == fastPtr) {
				return true;
			}
		} 
		return false;
	}
}