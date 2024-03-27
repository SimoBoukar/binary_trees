#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}
	node = binary_tree_node(parent, value);
	if (!parent->right)
	{
		parent->right = node;
	}
	else
	{
		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
	}
	return (node);
}
