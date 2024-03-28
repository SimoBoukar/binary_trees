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
 * binary_tree_levelorder - goes through a binary tree
 *							using level-order traversal
 * @tree: pointer to the root node
 * @func: pointer to a function to call for each node
 * Return: void
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h, i;

	if (!tree || !func)
		return;

	h = binary_tree_height(tree);

	for (i = 0; i <= h; i++)
		bt_lvlorder(tree, func, i);

}

/**
 * bt_lvlorder - execut func at the same level
 * @tree: pointer to the root node
 * @func: pointer to a function to call for each node
 * @lvl: tree level
 * Return: void
 */

void bt_lvlorder(const binary_tree_t *tree, void (*func)(int), size_t lvl)
{
	if (lvl == 0)
		func(tree->n);
	else
	{
		bt_lvlorder(tree->left, func, lvl - 1);
		bt_lvlorder(tree->right, func, lvl - 1);
	}
}
