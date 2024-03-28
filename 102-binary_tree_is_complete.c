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

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect.
 * @tree: binary_tree.
 *
 * Return: 1 if its perfect, 0 otherwise;
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	if (!tree)
		return (0);
	l = tree->left;
	r = tree->right;

	if (tree && !l && !r)
		return (1);
	if (!l || !r)
		return (0);
	if (binary_tree_height(l) == binary_tree_height(r))
	{
		if (binary_tree_is_perfect(l) && binary_tree_is_perfect(r))
			return (1);
	}
	return (0);
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node
 * Return: 1 if complete, otherwise 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t hl, hr;
	binary_tree_t *l, *r;

	if (!tree)
		return (0);
	if (tree && !tree->left && !tree->right)
		return (1);

	l = tree->left;
	r = tree->right;

	hl = binary_tree_height(l);
	hr = binary_tree_height(r);

	if (hl == hr)
	{
		if (binary_tree_is_perfect(l) && binary_tree_is_complete(r))
			return (1);
	}
	else if (hl == hr + 1)
	{
		if (binary_tree_is_complete(l) && binary_tree_is_perfect(r))
			return (1);
	}
	return (0);
}
