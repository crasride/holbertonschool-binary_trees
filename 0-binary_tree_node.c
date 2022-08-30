#include "binary_trees.h"

/**
* binary_tree_node - that creates a binary tree node
* @parent: Ptr the root
* @value: the new node
* Return: a pointer to the new node or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = NULL;

	n_node = malloc(sizeof(binary_tree_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	if (parent == NULL)
	{
		n_node->parent = NULL;
		n_node->left = NULL;
		n_node->right = NULL;
		n_node->n = value;
	}
	return (n_node);
}
