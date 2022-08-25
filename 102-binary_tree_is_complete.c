#include "binary_trees.h"
/**
 * createQueue - creates a queue
 * @front: the front element
 * @rear: the rear
 * Return: the queue
 */
binary_tree_t **createQueue(int *front, int *rear)
{
	binary_tree_t **queue = (binary_tree_t **)malloc(
		sizeof(binary_tree_t *) * 500);
	*front = *rear = 0;
	return (queue);
}
/**
 * enQueueu - add to queue
 * @queue: the queue
 * @rear: the rear
 * @new_node: the new node to be added
 */
void enQueue(binary_tree_t **queue, int *rear, binary_tree_t *new_node)
{
	queue[*rear] = new_node;
	(*rear)++;
}
/**
 * deQueueu - add to queue
 * @queue: the queue
 * @front: the rear
 */
binary_tree_t *deQueue(binary_tree_t **queue, int *front)
{
	(*front)++;
	return (queue[*front - 1]);
}


/**
 * isQueueEmpty - checks an empty queue
 * @front: front
 * @rear: rear
 * Return: true if empty, otherwise false
 */
int isQueueEmpty(int *front, int *rear)
{
	if (*rear == *front)
		return (1);
	else
		return (0);
}


/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: a pointer to the root
 * Return: 1 if complete, otherwise 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	 int rear, front;
	 binary_tree_t **queue = createQueue(&front, &rear);
	 int flag = 0;

	 if (tree == NULL)
		 return (0);
	 enQueue(queue, &rear, (binary_tree_t *)tree);
	 while (!isQueueEmpty(&front, &rear))
	 {
		 binary_tree_t *temp_node = deQueue(queue, &front);

		 if (temp_node->left)
		 {
			 if (flag == 1)
				 return (0);
			 enQueue (queue, &rear, temp_node->left);
		 }
		 else
			 flag = 1;
		 if (temp_node->right)
		 {
			 if (flag == 1)
				 return (0);
			 enQueue (queue, &rear, temp_node->right);
		 }
		 else
			 flag = 1;
	 }
	 return (1);
}
