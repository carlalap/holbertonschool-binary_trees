#include "binary_trees.h"

/**
 * binary_tree_sibling - finds a sibling of a node
 * @node: node for which to find a sibling
 * Return: sibling of node, or NULL
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
