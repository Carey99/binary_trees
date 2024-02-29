#include "binary_trees.h"

/**
 * callNode - call for each node
 * @value: Value of each node
 */

void callNode(int value)
{
	printf("%d\n", value);
}

/**
 * binary_tree_preorder - Pre-order traversal (root, left, right)
 * @tree: Pointer to the root
 * @func: Pointer func to callNode
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
