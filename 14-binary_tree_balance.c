#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: tree to measure
 * Return: returns the balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);

	if (tree->left == NULL)
		left = 0;
	if (tree->right == NULL)
		right = 0;

	return (left - right);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure
 * Return: tree height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int izquierda = 0, derecha = 0;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);

	izquierda = binary_tree_height(tree->left);
	derecha = binary_tree_height(tree->right);
	if (izquierda > derecha)
	{
		return (izquierda + 1);
	}
	else
	{
		return (derecha + 1);
	}
}
