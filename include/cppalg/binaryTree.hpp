// include/cppalg/binaryTree.hpp

namespace binaryTree {
	inline void invertChildren(Node* root) {
		if (root) {
			Node* tmep = root->left;
			root->left = root->right;
			root->right = temp;

			invertChildren(root->left);
			invertChildren(root->right);
		}
	}

	/*
	 * Operates on a binary tree formed from nodes of the form
	 *
	 * 	struct Node {
	 * 		int val;
	 *		Node* left;
	 *		Node* right;
	 * 	}
	 *
	 */
	inline Node* invert(Node* root) {
		invertChildren(root);
		return root;
	}
}
