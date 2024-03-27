#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: binary tree.
 *
 * Return: size of the binary tree
 * */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;
	size_t l = 0;
	size_t r = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		l = binary_tree_size(tree->left);
		r = binary_tree_size(tree->right);
		size = l + r + 1;
		return (size);
	}
}
