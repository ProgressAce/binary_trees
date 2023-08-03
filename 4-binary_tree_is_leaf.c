#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf of the binary tree.
 * @node: the node to check.
 *
 * A leaf is a node in a binary tree without any children nodes.
 * If node is NULL, 0 is returned.
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}

	if (!node->left && !node->right)
	{
		return (1);
	}

	return (0);
}
