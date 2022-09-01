#include "binary_trees.h"

/**
* binary_tree_nodes - count the number of nodes that have children
* @tree:  pointer to the root node of the tree to count the number of nodes
* Return: number nodes or 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);
	/**
	 * verify that you still have children to add them if you have any
	 * I add the node recursion
	 */

	if (tree->left != NULL || tree->right != NULL)
		n = (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right)) + 1;
	return (n);
}
