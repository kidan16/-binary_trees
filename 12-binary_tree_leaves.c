#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root of the tree
 * Return: the number of leaves, other wise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_R, leaves_L;

	if (!tree)
		return (0);

	if (tree && !tree->left && !tree->right)
		return (1);

	leaves_L = binary_tree_leaves(tree->left);
	leaves_R = binary_tree_leaves(tree->right);

	return (leaves_L + leaves_R);
}
