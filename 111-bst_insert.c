#include "binary_trees.h"

/**
* bst_insert - inserts a value in a BST
* @tree: double pointer to the root node
* @value: the value to store in the node
* Return: pointer to the created node
*/

bst_t *bst_insert(bst_t **tree, int value)
{
  bst_t *node;

  if (tree)
  {
    if (!*tree)
    {
      *tree = (bst_t *)binary_tree_node(NULL, value);
      return (*tree);
    }
    node = *tree;
    while (node)
    {
      if (node->n == value)
        break;
      if (node->n > value)
      {
        if (!node->left)
        {
          node->left = (bst_t *)binary_tree_node(node, value);
          return (node->left);
        }
        node = node->left;
      }
      else if (node->n < value)
      {
        if (!node->right)
        {
          node->right = (bst_t *)binary_tree_node(node, value);
          return (node->right);
        }
        node = node->right;
      }
    }
  }
  return (NULL);
}
