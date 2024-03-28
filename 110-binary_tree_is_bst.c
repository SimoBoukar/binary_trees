#include "binary_trees.h"

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search tree
 * @tree: pointer to the root node
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (bst_check(tree, INT_MIN, INT_MAX));
}

/**
 * bst_check - checks if a binary tree is a valid BST
 * @tree: pointer to the root node
 * @k: min value
 * @m: max value
 *
 * Return: 1 if BST, otherwise 0
 */

int bst_check(const binary_tree_t *tree, int k, int m)
{
	if (!tree)
		return (1);

	if (tree->n < k || tree->n > m)
		return (0);

	return (bst_check(tree->left, k, tree->n - 1) &&
		bst_check(tree->right, tree->n + 1, m));
}
