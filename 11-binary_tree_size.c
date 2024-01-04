#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: return the size of the tree else return NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_side = 0, right_side = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		left_side = 0;
	else
		left_side = binary_tree_size(tree->left);

	if (tree->right == NULL)
		right_side = 0;
	else
		right_side = binary_tree_size(tree->right);

	return ((left_side + right_side) + 1);
}
