#include "binary_trees.h"

/**
* binary_tree_size - measuring the size of a binary tree
* @tree: pointer to root
* Return: Tamaño del arbol o 0 si el arbol es NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;
	/*end of recursion*/
	if (!tree)
		return (0);
	/*Add left + right + 1*/
	s =  (binary_tree_size(tree->left) + binary_tree_size(tree->right)) + 1;
	return (s);
}
/**
* binary_tree_is_perfect - checks if the tree is perfect
* @tree: pointer to root
* Return: 0 is not perfect, 1 is perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_s = 0;
	int right_s = 0;

	if (tree == NULL)
		return (0);
	/* obtain the depth of the treee root */
	left_s = binary_tree_size(tree->left);
	right_s = binary_tree_size(tree->right);

	/* condition comparation */
	if (left_s == right_s)
		return (1);

	return (0);
}
