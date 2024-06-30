#include <iostream>

using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
};

void pre_order(Node* node) {
	if (node == NULL) {
		return;
	}
	cout << node->data << " ";
	pre_order(node->left);
	pre_order(node->right);
}

void in_order(Node* node) {
	if (node == NULL) {
		return;
	}
	in_order(node->left);
	cout << node->data << " ";
	in_order(node->right);
}

void post_order(Node* node) {
	if (node == NULL) {
		return;
	}
	post_order(node->left);
	post_order(node->right);
	cout << node->data << " ";
}

int main() {
	Node* root = new Node{10};
	root->left = new Node{5};
	root->right = new Node{15};
	root->left->left = new Node{2};
	root->left->right = new Node{7};
	root->right->left = new Node{12};
	root->right->right = new Node{20};
	
	cout << "PRE-ORDER: ";
	pre_order(root);
	cout << endl;
	
	cout << "IN-ORDER: ";
	in_order(root);
	cout << endl;
	
	cout << "POST-ORDER: ";
	post_order(root);
	cout << endl;
	
	return 0;
}
