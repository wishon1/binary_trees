#include "binary_trees.h"
/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the no. of leaves
 * Return: return the number of leaves else return NULL if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_side = 0, right_side = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_side = binary_tree_leaves(tree->left);
	else
		return (1);

	if (tree->right != NULL)
		right_side = binary_tree_leaves(tree->right);
	else
		return (1);

	return (left_side + right_side);
}
