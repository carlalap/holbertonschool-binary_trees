#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a binary tree right node
 *
 * @parent: pointer to the parent node
 * @value: value to put in new node
 * return: pointer to the new node, or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode;


	if (parent)
	{
	rightnode = binary_tree_node(parent, value);
	if (parent->right)
	{
		rightnode->right = parent->right;
		rightnode->right->parent = rightnode;
	}
	parent->right = rightnode;
	return (rightnode);
	}
	return (NULL);


}
