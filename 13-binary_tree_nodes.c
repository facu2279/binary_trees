#include "binary_trees.h"
/**
* binary_tree_nodes - return ammount of nodos
* @tree: pointer to tree
* Return: total ammount of nodos in a tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (0);
	else
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
