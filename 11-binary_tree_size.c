#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a given root node in a binary tree.
 * @tree: pointer to the root node to measure its tree size.
 *
 * If the tree is NULL, then 0 is returned.
 * Return: the size of the tree from the given node.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (!tree) /* base condition */
	{
		return (0);
	}

	left_count = binary_tree_size(tree->left);
	right_count = binary_tree_size(tree->right);

	return (left_count + right_count + 1);
}
