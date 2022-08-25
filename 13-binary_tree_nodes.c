#include "binary_trees.h"
/**
 * binary_tree_nodes - conts the nodes with at least 1 child
 * @tree: pointer to the tree
 * Return: the number of the node, otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_L, nodes_R;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	nodes_L = binary_tree_nodes(tree->left);
	nodes_R = binary_tree_nodes(tree->right);

	return (nodes_L + nodes_R + 1);
}
