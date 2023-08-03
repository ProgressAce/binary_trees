#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: pointer to the node to measure its depth in the tree.
 *
 * If the tree is NULL, then 0 is returned.
 * Return: the depth of the node in the tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree) /* base condition */
	{
		return (0);
	}

	depth = binary_tree_depth(tree->parent);

	if (tree->parent == NULL) /* so that the root node is not counted */
	{
		return (0);
	}

	return (depth + 1);
}
