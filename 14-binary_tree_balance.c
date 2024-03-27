#include "binary_trees.h"

/**
 * binary_subtree_height - measures the height of the binary tree.
 * @tree: binary tree.
 *
 * Return: height of binary_tree
 */

size_t binary_subtree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;
	size_t height;

	if (!tree)
	{
		return (0);
	}
	else
	{
		l = binary_subtree_height(tree->left);
		r = binary_subtree_height(tree->right);
		if (l > r)
			height = l;
		else
			height = r;
		return (height + 1);
	}
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: binary_tree
 *
 * Return: the balance factor of the binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;
	size_t balance;

	if (!tree)
		return (0);
	else
	{
		l = binary_subtree_height(tree->left);
		r = binary_subtree_height(tree->right);
		balance = l - r;
		return (balance);
	}
}

