#include "binary_trees.h"


/**
 * binary_tree_delete - deletes an entire binary tree.
 * @tree: pointer to the root node of the tree to delete.
 *
 * If tree is NULL, then nothing will be done.
 */
void binary_tree_delete(binary_tree_t *tree)
{
/*	binary_tree_t *parent;*/

	if (!tree)
	{
		return;
	}
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
