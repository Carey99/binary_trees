#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node,
 *         or NULL if no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	const binary_tree_t *ancestor;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	ancestor = first;
	while (ancestor != NULL)
	{
		if (binary_tree_search(ancestor->left, second) &&
binary_tree_search(ancestor->right, first))
			return ((binary_tree_t *)ancestor);
		if (binary_tree_search(ancestor->left,
first) && binary_tree_search(ancestor->right, second))
			return ((binary_tree_t *)ancestor);

		if (ancestor == first || ancestor == second)
			return ((binary_tree_t *)ancestor);

		ancestor = ancestor->parent;
	}

	return (NULL);
}

/**
 * binary_tree_search - Checks if a node is present in a binary tree
 * @tree: Pointer to the root node of the tree
 * @node: Pointer to the node to search for
 *
 * Return: 1 if the node is present in the tree, 0 otherwise
 */
int binary_tree_search(const binary_tree_t *tree, const binary_tree_t *node)
{
	if (tree == NULL)
		return (0);

	if (tree == node)
		return (1);

	return (binary_tree_search(tree->left, node) ||
binary_tree_search(tree->right, node));
}
