#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is the root of the binary tree.
 * @node: the node to check.
 *
 * The root is the first node of the binary tree. Therefore it has no
 * parent node.
 * If node is NULL, 0 is returned.
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}

	if (!node->parent)
	{
		return (1);
	}

	return (0);
}
