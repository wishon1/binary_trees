#include "binary_trees.h"
/**
 * binary_tree_node - funtion that create a binary tree node
 * parent: pointer of the parent node of the node to be created
 * value: the value of the new node
 * Return: return a pointer to the new node or NULL if theres a failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return NULL;
    else
    {
        new_node->parent = parent;
        new_node->left = NULL;
        new_node->right = NULL;
        new_node->n = value;

        return (new_node);
    }
}
