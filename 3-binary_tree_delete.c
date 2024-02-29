#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes entire binary tree
 * @tree: Pointer to root node
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	if (tree->left != NULL)
	{
		tree->left->parent = NULL;
	}
	if (tree->right != NULL)
	{
		tree->right->parent = NULL;
	}
	free(tree);
}
