#include "binary_trees.h"

/**
 * bst_search - searches for a value in a Binary Search Tree
 * @tree: pointer to the root node
 * @value: value to search in the tree
 * Return: pointer to the node containing a value equals to value
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *current;

	current = (bst_t *)tree;

	while (current)
	{
		if (current->n == value)
			return (current);

		if (current->n > value)
			current = current->left;
		else
			current = current->right;
	}
	return (NULL);
}
