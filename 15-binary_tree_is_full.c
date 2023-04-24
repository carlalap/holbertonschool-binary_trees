#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* If tree is empty, it's full */
	if (tree == NULL)
		return (1);

	/* If node is a leaf, it's full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If node has two children, check if both are full */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If none of the above cases are true, the tree is not full */
	return (0);
}

