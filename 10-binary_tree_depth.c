#include "binary_trees.h"
/**
 * binary_tree_depth - measures the size of a binary tree
 * @tree: tree to measure
 * Return: returns the size
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t a = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		a++;
	}
	return (a);
}
