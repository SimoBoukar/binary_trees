#include "binary_trees.h"

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect.
 * @tree: binary_tree.
 *
 * Return: 1 if its perfect, 0 otherwise;
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l;
	size_t r;
	size_t lfull;
	size_t rfull;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			l = binary_tree_height(tree->left);
			r = binary_tree_height(tree->right);
			lfull = binary_tree_is_full(tree->left);
			rfull = binary_tree_is_full(tree->right);
			if (l == r && (lfull && rfull))
				return (1);
			else
				return (0);
		}
	}
}
