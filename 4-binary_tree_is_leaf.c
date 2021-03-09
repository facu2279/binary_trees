#include "binary_trees.h"
/**
 * binary_tree_is_leaf - fcheck if node is empty
 * @node: pointer to node
 * Return: 1 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}