#include "binary_trees.h"

/**
 * binary_tree_height - measure height of a binary tree
 * @tree: pointer to root node of tree
 * Return: 0 if tree is null, else height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (tree)
	{
		leftHeight = binary_tree_height(tree->left);
		rightHeight = binary_tree_height(tree->right);
		return (leftHeight > rightHeight ? ++leftHeight : ++rightHeight);
	}
	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of a binary tree
 * Return: balance factor of the binary tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	return (!tree ? 0 :
		binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
