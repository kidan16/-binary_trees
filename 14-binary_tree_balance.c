#include "binary_trees.h"
/**
 * bt_height - finds the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: height of the tree, othwerwise 0
 */
size_t bt_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = bt_height(tree->left);
	right = bt_height(tree->right);
	if (left >= right)
		return (left + 1);
	else
		return (right + 1);
	return (left + right);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root of the tree
 * Return: the balance factor, otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (bt_height(tree->left) - bt_height(tree->right));
}
