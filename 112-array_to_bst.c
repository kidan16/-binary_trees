#include "binary_trees.h"
/**
 * array_to_bst - creates a BST from an array
 * @array: a pointer to the first element of the array
 * @size: size of the array
 * Return: a pointer to the inserted node
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t counter = 0;

	if (!array)
		return (NULL);

	while (counter < size)
	{
		bst_insert(&root, array[counter]);
		counter++;
	}
	return (root);
}
