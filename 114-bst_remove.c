#include "binary_trees.h"
/**
 * bst_remove - removes a given value from a BST
 * @root: a pointer to the root node
 * @value: a value to remove in a tree
 * Return: a pointer to the new root
 */
bst_t *bst_remove(bst_t *root, int value)
{
    bst_t *temp;

	if (!root)
		return (NULL);
	temp = (bst_t *)root;
	while (temp)
	{
		if (temp->n == value)
        {
            if (temp->right->left)
            {
                temp->parent->right = temp->right->left;
                temp->right->parent = temp->parent;
            }
            else if (temp->right)
            {
                temp->parent->right = temp->right;
                temp->right->parent = temp->parent;
            }
            else
                temp->parent = NULL;
            free (temp);
        }
		if (value < temp->n)
			temp = temp->left;
		if (value > temp->n)
			temp = temp->right;
	}
	return (NULL);
}