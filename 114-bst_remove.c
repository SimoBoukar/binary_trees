#include "binary_trees.h"

/**
 * bst_remove - removes a node from a Binary Search Tree
 * @root: pointer to the root node of the tree
 * @value: value to remove in the tree
 * Return: pointer to the new root node
 */

bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *bstree = NULL;

	if (!root)
		return (NULL);

	if (root->n > value)
		root->left = bst_remove(root->left, value);
	else if (root->n < value)
		root->right = bst_remove(root->right, value);
	else
	{
		if (!root->left && !root->right)
		{
			free(root);
			return (NULL);
		}
		else if (!root->right)
		{
			bstree = root->left;
			free(root);
			return (bstree);
		}
		else if (!root->left)
		{
			bstree = root->right;
			free(root);
			return (bstree);
		}
		bstree = bst_min(root->right);
		root->n = bstree->n;
		root->right = bst_remove(root->right, bstree->n);
	}
	return (root);
}

/**
 * bst_min - finds the min value in BST
 * @tree: pointer to the root node
 * Return: pointer to the min value node
 */

bst_t *bst_min(bst_t *tree)
{
	while (tree->left)
		tree = tree->left;
	return (tree);
}
