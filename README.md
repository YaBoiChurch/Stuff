Binary Trees
What is a binary tree? 
A binary tree is a tree that has 2 children at most. Those children are called the left child and the right child.
Unlike Arrays, Linked Lists, Stack and queues, which are linear data structures, trees are hierarchical data structures 
(Source:https://www.geeksforgeeks.org/binary-tree-set-1-introduction/)
The top of the tree is called a root (ironically the root is at the top of the tree)

Why are Binary Trees useful?
Trees can provide moderate access and search functionality. (quicker than Linked List and slower than arrays).
They can provide moderate insertion and deletion. (quicker than Arrays and slower than Unordered Linked Lists).
Like Linked Lists and unlike Arrays, Trees don’t have an upper limit on number of nodes as nodes are linked using pointers.
You can use trees to store information that can become hierarchal(ex. File system)
Source:https://www.geeksforgeeks.org/binary-tree-set-1-introduction/

Breadth-First Tree Traversal
There are different types of traversals that one can use when it comes to trees
For a breadth-first traversal, it is the simplest because you just list the nodes in numerical order.
	  1
    2       3
  4   5
The traversal would look like: 1,2,3,4,5 in a breadth-first traversal.
Source:https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/

Depth-First Tree Traversal
There are 3 types of depth-first tree traversal’s: Preorder, Inorder, Postorder
Each tree traversal uses a different order when it comes to how it traverses a tree

Preorder 
In Preorder traversal, it begins at the root and then traverses the left side of the tree, and then finishes with the right side of the tree.

	  1
    2       3
  4   5

The order would start at 1. Then we would traverse to the left to 2 and then count the children of 2, 4 and 5. Then we would finish on the right side of the tree at 3.
In this example the order would go: 1,2,4,5,3
Source:https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm
https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/
Inorder
For this tree traversal we start out at the bottom of the tree, and then traverse from left to right.

	  1
    2       3
  4   5

In this we start at the bottom on the left-most node, which in this case is 4. We then go to the root of the subtree which is 2, and then to the right node at 5. We then go to the root of the tree at 1, and finish to the right at 3.
So the order for this would be: 4,2,5,1,3
Sources:https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm
https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/

Postorder
Similar to Inorder traversal we start at the bottom of the tree, the key difference is that the root of the entire tree goes last. In the order of left, right, root.

	  1
    2       3
  4   5

We start at the bottom in this example at 4, and then traverse to the right at 5. We now traverse the sub-root at 2, and then go right at 3. Then we finish at the root where 1 is.
The order for Postorder ends up being: 4,5,2,3,1
Sources:https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm
https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/

Binary Search Trees
A binary search tree is a binary tree that has a storing repository that provides the efficient way of data sorting, searching and retrieving.
Searching in a BST always starts at the root. We compare a data stored at the root with the key we are searching for. If the node does not contain a key, we either proceed to the left or the right (Depending on comparison). If the result of comparison is negative we go to the left child, otherwise - to the right child. The recursive structure of a BST yields a recursive algorithm.
Source: https://www.cs.cmu.edu/~adamchik/15-121/lectures/Trees/trees.html

Sources:
https://www.cs.cmu.edu/~adamchik/15-121/lectures/Trees/trees.html
https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm
https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/
https://www.geeksforgeeks.org/binary-tree-set-1-introduction/
