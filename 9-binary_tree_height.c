#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a node in a binary tree.
 * @tree: pointer to the root node of the tree to measure its height.
 * 
 * Algorithm Description: The left and right heights start at 0
 * so that the total height does not include the root as a height.
 * If the tree is NULL, then 0 is returned.
 * Return: the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree) /* base condition */
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (tree->parent == NULL) /* so that the root node is not counted */
	{
		if (left_height > right_height)
			return (left_height);
		else
			return (right_height);
	}

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
