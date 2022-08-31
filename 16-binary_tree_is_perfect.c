#include "binary_trees.h"

/**
* binary_tree_is_perfect - checks if the tree is perfect
* @tree: pointer to root
* Return: 0 is not perfect, 1 is perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_perfect(tree->left) != binary_tree_is_perfect(tree->right))
		return (0);
	else
		return (1);
}
