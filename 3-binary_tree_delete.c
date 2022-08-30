#include "binary_trees.h"

/**
* binary_tree_insert_right - Add a new right node
* @parent: Parent ptr
* @value: Value node
* Return: Ptr
*/

void binary_tree_delete(binary_tree_t *tree)

{
    if(tree == NULL)
        return;

    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    free(tree);

    return;
}
