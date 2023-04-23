#include "binary_trees.h"

/**
 * binary_tree_height - measure height of a binary tree
 * @tree: pointer to root node of tree
 * Return: 0 if tree is null, else height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (tree && (tree->left || tree->right))
	{
		leftHeight = binary_tree_height(tree->left);
		rightHeight = binary_tree_height(tree->right);
		return (leftHeight > rightHeight ? ++leftHeight : ++rightHeight);
	}
	return (0);
}
