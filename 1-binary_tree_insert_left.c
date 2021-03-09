#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL || parent == NULL)
        return(NULL);
    new_node->parent = parent;
    new_node->right = NULL;
    new_node->n = value;
    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left = new_node;
        new_node->left->parent = new_node;
    }
    else
    {
        parent->left = new_node;
    }

    return(new_node);
}