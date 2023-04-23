#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a binary tree left node
 * @parent: pointer to the parent node
 * @value: value to put in the node
 * Return: Pointer to the new node, or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode;


	if (parent)
	{
		leftnode = binary_tree_node(parent, value);
		if (parent->left)
		{
			leftnode->left = parent->left;
			leftnode->left->parent = leftnode;
		}
		parent->left = leftnode;
		return (leftnode);
	}
	return (NULL);
}
