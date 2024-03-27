#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: binary tree
 *
 * Return: number of leaves in binary tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;
	size_t l = 0;
	size_t r = 0;

	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !left->right)
	{
		return (1);
	}
	else
	{
		l = binary_tree_leaves(tree->left);
		r = binary_tree_leaves(tree->right);
		leaves = l + r;
		return (leaves);
	}
}
