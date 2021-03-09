#include "binary_trees.h"
/**
* binary_tree_height - calculate de height of a tree
* @tree: pointer to tree
* Return: return the height
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
