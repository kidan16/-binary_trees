#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node
 * Return: a pointer to the uncle, Otherwise Null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left != node->parent)
	{
		if (!node->parent->parent->left)
			return (NULL);
		return (node->parent->parent->left);
	}
	else
	{
		if (!node->parent->parent->right)
			return (NULL);
		return (node->parent->parent->right);
	}
}
