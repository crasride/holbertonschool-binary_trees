#include "binary_trees.h"

/**
* binary_tree_node - that creates a binary tree node
* @parent: Ptr the root
* @value: the new node
* Return: a pointer to the new node or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent == NULL)
	{
		new_node->parent = NULL;
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->n = value;
	}
	else
	{
		new_node->parent = parent;
		new_node->left = NULL;
		new_node->right = NULL;
		new_node->n = value;
	}
	return (new_node);
}
