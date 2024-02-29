#include "binary_trees.h"
/**
 * binary_tree_height_helper - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height_helper(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height_helper(tree->left);
	right_height = binary_tree_height_helper(tree->right);

	if (left_height > right_height)
	{
		return (left_height + 1);
	}
	return (right_height + 1);
}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor of the binary tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height_helper(tree->left);
	size_t right_height = binary_tree_height_helper(tree->right);

	return ((int)(left_height - right_height));
}
