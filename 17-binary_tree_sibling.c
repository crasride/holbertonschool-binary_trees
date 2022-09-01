#include "binary_trees.h"

/**
* binary_tree_sibling - that finds the sibling of a node
* @node: pointer to node to find the sibling
* Return: oointer to sibling node or NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/**
	 * check if the node passed as argument is the node on the left of the
	 * parent node (the root) and if the sibling node is NOT NULL, since
	 * if it were NULL we want it to go to the return NULL below because in said
	 * case has no brother
	 */

	if (node == node->parent->left && node->parent->right != NULL)
		return (node->parent->right);

	/**
	 * check if the node passed as an argument is the node on the right
	 * of the parent node (the root) and if the siblin node is NOT NULL, then
	 * that if it were NULL we want it to go to the return NULL below because in
	 * said case has no brother
	 */

	if (node == node->parent->right && node->parent->left != NULL)
		return (node->parent->left);

	/* Otherwise return NULL */
	return (NULL);
}
