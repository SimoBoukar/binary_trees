#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root node
 * Return: 1 if complete, otherwise 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *queue[1024];
	int front = 0, rear = 0, not_full = 0;
	binary_tree_t *current;

	if (!tree)
		return (0);
	queue[rear++] = (binary_tree_t *)tree;
	while (front < rear)
	{
		current = queue[front++];
		if (current->left)
		{
			if (not_full == 1)
			{
				return (0);
			}
			queue[rear++] = current->left;
		}
		else
		{
			not_full = 1;
		}
		if (current->right)
		{
			if (not_full == 1)
			{
				return (0);
			}
			queue[rear++] = current->right;
		}
		else
		{
			not_full = 1;
		}
	}
	return (1);
}
