#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root of the tree
 * Return: the size, otherwise 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_R, size_L;

	if (!tree)
		return (0);

	size_L = binary_tree_size(tree->left);
	size_R = binary_tree_size(tree->right);
	return (size_R + size_L + 1);
}
