#include "binary_trees.h"

/**
 * binary_tree_node - createsa binary tree node.
 * @parent: pointer to parent node
 * @value: value to put in node
 * return: Pointer to tne node or Null
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));


	if (newnode)
	{
		newnode->parent = parent;
		newnode->n = value;
		newnode->left = NULL;
		newnode->right = NULL;
		return (newnode);
	}
	return (NULL);
}
