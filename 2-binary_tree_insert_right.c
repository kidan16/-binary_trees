#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: a pointer to the created node
 * or NULL on failure or if the parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child = NULL;

	if (parent == NULL)
		return (NULL);

	right_child = malloc(sizeof(binary_tree_t));

	if (right_child == NULL)
		return (NULL);

	right_child->parent = parent;
	right_child->n = value;


	if (parent->right)
	{
		right_child->right = parent->right;
		right_child->right->parent = right_child;

	}
	else
		right_child->right = NULL;

	right_child->left = NULL;
	parent->right = right_child;

	return (right_child);
}
