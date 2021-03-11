#include "binary_trees.h"
/**
 * binary_tree_is_perfect - check perfect tree
 * @tree: pointer to node
 * Return: 1 or 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0)
		if (binary_tree_is_perfect(tree->left) &&
		    binary_tree_is_perfect(tree->right))
			return (1);
	return (0);
}

/**
 * binary_tree_is_full - xd
 * @tree: pointer to node
 * Return: 1 if the tree is full, else 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
	return (0);
}

/**
 * binary_tree_balance - xd
 * @tree: pointer to node
 * Return: count
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}

/**
 * binary_tree_height - xd
 * @tree: pointer to node
 * Return: height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
