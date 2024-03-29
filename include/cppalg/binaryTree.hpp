// include/cppalg/binaryTree.hpp

namespace binaryTree {

	/*
	 *
	 * The functions operate on a binary tree consisting of nodes of the form
	 *
	 *	struct Node {
	 *		int val;
	 *		Node *left;
	 *		Node *right;
	 *	}
	 *
	 */

	#include <stack>

	inline void invertChildren(Node *root) {
		if (root) {
			Node *temp = root->left;
			root->left = root->right;
			root->right = temp;

			invertChildren(root->left);
			invertChildren(root->right);
		}
	}

	inline Node* invert(Node *root) {
		invertChildren(root);
		return root;
	}

	inline vector<int> inorderTraversal(Node *root) {
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

	inline vector<int> preorderTraversal(Node *root) {
		vector<int> out;
	        if (root == nullptr) return out;
	        stack<TreeNode*> stack;

	        while (root != nullptr || !stack.empty()) {
			while (root != nullptr) {
		                out.push_back(root->val);
		                stack.push(root);
		                root = root->left;
			}
			root = stack.top();
			stack.pop();
			root = root->right;
	        }

	        return out;
	} 

}
