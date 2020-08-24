#include <iostream>
using namespace std;

struct Node {
	int value;
	Node *left, *right;

	Node(int val)
	{
		this->value = val;
		this->left = this->right = NULL;
	}
};

int maxDepth(Node * root)
{
  if (root == NULL)
    return 0;
  
  int leftDepth = maxDepth(root->left);
  int rightDepth = maxDepth(root->right);

  if (leftDepth > rightDepth)
    return leftDepth + 1;
  else
    return rightDepth + 1;
}

int main() {
  Node* root = new Node(3);
  root->left = new Node(9);
  root->right = new Node(20);
  root->right->left = new Node(15);
  root->right->right = new Node(7);
  cout << "The maximum depth is: " << maxDepth(root) << endl;
}
