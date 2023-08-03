#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using postorder traversal.
 * @tree: pointer to the root node of the tree.
 * @func: pointer to the function to call for each node value of the tree.
 * 
 * If the tree or func is NULL, then nothing will be done.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func) /* base condition and start condition */
	{
		return;
	}
	
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
