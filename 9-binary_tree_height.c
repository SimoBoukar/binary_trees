#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;
	size_t height;

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}
	else
	{
		l = binary_tree_height(tree->left);
		r = binary_tree_height(tree->right);
		if (l > r)
			height = l;
		else
			height = r;
		return (height + 1);
	}
}
