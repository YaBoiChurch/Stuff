#include<iostream>
using namespace std;
typedef int Type;
struct TreeNode {
	Type value;
	TreeNode* left;
	TreeNode* right;
};//This struct defines our left, right nodes. As well as our node Type
class Tree {
public:
	Tree();
	void PutItem(Type v);
	void PrintTree();
	void PrintIn();
	void PrintPre();
	void PrintPost();
	Type GetItem(Type v, bool& found);
private:
	TreeNode* root;
};
Tree::Tree()
{
	root = NULL;
}
void Insert(TreeNode*& tree, Type v)
{
	if (tree == NULL)
	{
		tree = new TreeNode;
		tree->value = v;
		tree->left = NULL;
		tree->right = NULL;
	}//If the tree is empty then the value that is provided will be inserted as the root
	else if (v < tree->value)
		Insert(tree->left, v);
	//If the value provided is less than the root or less than a previous value, it is inserted to the left in the tree
	else if (v > tree->value)
		Insert(tree->right, v);
	//If the value provided is more than the root or a previous value, it is inserted to the right in the tree
}
void Tree::PutItem(Type v)
	{
		Insert(root, v);
	}
//Inserts number
void InOrder(TreeNode* tree)
{
	if (tree !=NULL)
		{
			InOrder(tree->left);
			cout<<tree->value << " ";
			InOrder(tree->right);
		}
}//Traverses the tree in the order of left, root, right
void PreOrder(TreeNode* tree)
{
	if (tree != NULL)
	{
		cout << tree->value << " ";
		PreOrder(tree->left);
		PreOrder(tree->right);
	}
}//Traverses the tree in the order of root, left, right
void PostOrder(TreeNode* tree)
{
	if (tree != NULL)
	{
		PostOrder(tree->left);
		PostOrder(tree->right);
		cout << tree->value << " ";
	}
}//Traverses the tree in the order of left, right, root
void outPutTree(TreeNode* tree, int spaces)
{
	if (tree != NULL)
	{
		outPutTree(tree->right, spaces + 5);
		for (int i = 0; i < spaces; i++)
			cout << " ";
		cout << tree->value << endl;
		outPutTree(tree->left, spaces + 5);
	}
}// This function builds the tree by putting each value in the correct space, while also spacing the numbers out so the tree is not cluttered.
void Tree::PrintTree()
{
	outPutTree(root, 0);
}
void Tree::PrintIn()
{
	InOrder(root);
}
void Tree::PrintPre()
{
	PreOrder(root);
}
void Tree::PrintPost()
{
	PostOrder(root);
}
void RetrieveItem(TreeNode* tree, Type& v, bool& found)
{
	if (tree == NULL)
		found = false;
	else if (v < tree->value)
		RetrieveItem(tree->left, v, found);
	else if (v > tree->value)
		RetrieveItem(tree->right, v, found);
	else {
		found = true;
		v = tree->value;
	}
}//Uses a boolean variable to search if the value requested is in the tree by searching the left side of the tree, and the right side. But if not found returns false
Type Tree::GetItem(Type v, bool& found)
{
	RetrieveItem(root, v, found);
	return v;
}
int main()
{
	Tree tree;
	Type v;
	bool found;
	int option;
	do {
		cout << "1. Add Node\n"
			<< "2. Find Node\n"
			<< "3. In Order\n"
			<< "4. Pre Order\n"
			<< "5. Post Order\n"
			<< "6. Print Tree\n"
			<< "7. Exit\n";
		cin >> option;
		switch (option)
		{
		case 1:
			cout << "Enter a value: ";
			cin >> v;
			tree.PutItem(v);
			break;
			//User enters a number and places it in the tree
		case 2:
			cout << "Enter a value: ";
			cin >> v;
			tree.GetItem(v, found);
			if (found)
				cout << v << " is in the tree\n";
			else
				cout << v << " is not in the tree\n";
			break;
			//Searches for the number requested and prints out result accordingly
		case 3:
			tree.PrintIn();
			cout << endl;
			break;
		case 4:
			tree.PrintPre(); 
			cout << endl;
			break;
		case 5:
			tree.PrintPost();
			cout << endl;
			break;
		case 6:
			tree.PrintTree();
			cout << endl;
			break;
			}
		//Cases 3-6 print out their functions
	} while (option != 7);
}