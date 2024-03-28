#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: binary_tree.
 *
 * Return: 1 if its full, otherwise 0;
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
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
			l = binary_tree_is_full(tree->left);
			r = binary_tree_is_full(tree->right);
			return (l && r);
		}
		return (0);
	}
}

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
 * binary_tree_size - measures the size of a binary tree.
 * @tree: binary tree.
 *
 * Return: size of the binary tree
*/
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
  size_t size;
  size_t check;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
      size = binary_tree_size(tree);
			l = binary_tree_height(tree->left);
			r = binary_tree_height(tree->right);
			lfull = binary_tree_is_full(tree->left);
			rfull = binary_tree_is_full(tree->right);
      check = (1 << (l + 2)) - 1;

			if (l == r && (lfull && rfull) && (size == check))
			{
				return (1);
			}
			else
				return (0);
		}
    if (!tree->left && !tree->right)
      return (1);
	}
	return (0);
}


