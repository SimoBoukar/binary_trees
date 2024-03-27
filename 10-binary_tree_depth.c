#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: binary_tree
 *
 * Return: depth of the binary tree;
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t p = 0;
	size_t depth;

	if (!tree || !tree->parent)
	{
		return (0);
	}
	else
	{
		p = binary_tree_depth(tree->parent);
		depth = p + 1;
		return (depth);
	}
}
