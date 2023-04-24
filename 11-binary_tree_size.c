#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node of tree
 * Return: size of tree, or 0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftSize, rightSize;

	if (tree)
	{
		leftSize = binary_tree_size(tree->left);
		rightSize = binary_tree_size(tree->right);
		return (leftSize + rightSize + 1);
	}
	return (0);
}
