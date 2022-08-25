#include "binary_trees.h"
/**
 * bst_insert - inserts a node into a BST
 * @tree: a pointer to the root
 * @value: the value to be inserted
 * Return: a pointer to the inserted node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *temp;

	if (!tree)
		return (NULL);
	if (*tree == NULL)
	{
		*tree = (bst_t *) binary_tree_node(NULL, value);
		return (*tree);
	}
	else
	{
		temp = (bst_t *) *tree;
		while (temp)
		{
			if (temp->n == value)
				break;
			if (temp->n > value)
			{
				if (!temp->left)
				{
					temp->left = (bst_t *)binary_tree_node(temp, value);
					return (temp->left);
				}
				temp = temp->left;
			}
			if (temp->n < value)
			{
				if (!temp->right)
				{
					temp->right = (bst_t *)
						binary_tree_node(temp, value);
					return (temp->right);
				}
				temp = temp->right;
			}
		}
	}
	return (NULL);
}
