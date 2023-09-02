// include/cppalg/linkedList.hpp

namespace linkedList {
	/*
	 *
	 * Floyd's cycle-finding algorithm
	 *
	 * Operates on a linked list formed from nodes of the form
	 *
	 * 	struct Node {
	 *		int val;
	 *		Node* next;
	 *		Node(int x) : val(x), next(NULL) {}
	 * 	};
	 *
	 */
	inline bool hasCycle(Node* head) {
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