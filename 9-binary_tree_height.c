#include "binary_trees.h"

/**
 * binary_tree_height - checks the height.
 * @tree: binary_tree.
 *
 * Return: 1 if its full, otherwise 0;
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l;
	size_t r;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if (!tree->left && !tree->right)
			return (1);
		if (tree->left && tree->right)
		{
			l = binary_tree_height(tree->left);
			r = binary_tree_height(tree->right);
			return (l && r);
		}
		return (0);
	}
}
