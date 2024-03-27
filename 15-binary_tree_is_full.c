#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: binary_tree.
 *
 * return: 1 if its full, otherwise 0;
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t l;
	size_t r;

	if (!tree)
		return (0);
	else
	{
		if (!tree->left && !tree->right)
			return (1);
		if (tree->left && tree->right)
		{
			l = binary_tree_is_full(tree->left);
			r = binary_tree_is_full(tree->right);
			return (l && r);
		}
		return (0);
	}
}
