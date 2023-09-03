// include/cppalg/binaryTree.hpp

namespace binaryTree {

	/*
	 * The functions operate on a binary tree formed from nodes of the form
	 *
	 * 	struct Node {
	 * 		int val;
	 *		Node* left;
	 *		Node* right;
	 * 	}
	 *
	 */

	#include <stack>

	inline void invertChildren(Node* root) {
		if (root) {
			Node* tmep = root->left;
			root->left = root->right;
			root->right = temp;

			invertChildren(root->left);
			invertChildren(root->right);
		}
	}

	inline Node* invert(Node* root) {
		invertChildren(root);
		return root;
	}

	inline void inorderTraversal(Node* root) {
		vector<int> out;
	        if (!root) return out;
	        stack<TreeNode*> stack;

	        while (root || !stack.empty()) {
	        	while (root) {
	                	stack.push(root);
	                	root = root->left;
	            	}
	            	root = stack.top();
	            	stack.pop();
	            	out.push_back(root->val);
	            	root = root->right;
	        }
	        return out; 
	}

}
