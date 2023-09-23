// include/cppalg/linkedList.hpp

namespace linkedList {

	/*
	 *
	 * The following functions operate on linked list nodes of the form
	 *
	 *	struct Node {
	 *		int val;
	 *		Node *next;
	 *	}
	 *
	 */

	 // Floyd's cycle-finding algorithm
	inline bool hasCycle(Node *head) {
		if (head == nullptr) return false;

		Node *slowPtr = head;
		Node *fastPtr = head;

		while (slowPtr != nullptr && fastPtr != nullptr && fastPtr->next != nullptr) {
			slowPtr = slowPtr->next;
			fastPtr = fastPtr->next->next;

			if (slowPtr == fastPtr) {
				return true;
			}
		} 

		return false;
	}

	inline void reverse(Node *head) {
		Node *bot = nullptr;
		Node *mid = head;
		Node *top = nullptr;

	        while (mid) {
			top = mid->next;
			mid->next = bot;
			bot = mid;
			mid = top;
	        }

	        return bot;
	}
}