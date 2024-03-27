#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: binary tree
 *
 * Return: number of nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;
	size_t l = 0;
	size_t r = 0;

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}
	else
	{
		l = binary_tree_nodes(tree->left);
		r = binary_tree_nodes(tree->right);
		nodes = l + r + 1;
		return (nodes);
	}
}
