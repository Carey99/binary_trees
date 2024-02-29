#include "binary_trees.h"

/**
 * max - Find max value
 * @a: value 1
 * @b: value 2
 *
 * Return: The greater value
 */

size_t max(int a, int b)
{
	if (a > b)
	{
		return (a);
	}
	return (b);
}

/**
 * binary_tree_height - Measures the height
 * @tree: Pointer to root
 *
 * Return: 0 for fail
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h > right_h)
	{
		return (left_h + 1);
	}
	return (right_h + 1);
}
