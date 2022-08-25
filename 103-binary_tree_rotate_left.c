#include "binary_trees.h"
/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: a pointer to the root node
 * Return: a pointer to the new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);
	if (tree->right)
	{
		tree->right->parent = tree->parent;
		tree->parent = tree->right;
		tree->right = tree->parent->left;
		tree->parent->left = tree;
	}
	return (tree->parent);
}
