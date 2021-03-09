#include "binary_trees.h"
/**
* binary_tree_node - create a node
* @parent: pointer to parent
* @value: value of new node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return(NULL);
    new_node->parent = parent;
    new_node->right = NULL;
    new_node->left = NULL;
    new_node->n = value;

    return(new_node);
}