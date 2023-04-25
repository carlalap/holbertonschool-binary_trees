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


/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to root node
 * Return: 1 if full, else 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	return (tree &&
		((!tree->left && !tree->right) ||
		(binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right)))
		? 1 : 0);
}


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: pointer to the root node of a binary tree
 * Return: 1 if perfect, else 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (tree &&
		(!binary_tree_balance(tree) && binary_tree_is_full(tree) &&
		(binary_tree_size(tree->left) == binary_tree_size(tree->right))
		) ? 1 : 0);
}
