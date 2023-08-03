#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to count the number of nodes.
 *
 * Implementation: Use binary_tree_height function to get the left and right
 * heights respectively. Then subtract the right height from the left one to
 * determine the balance factor.
 *
 * If the tree is NULL, then 0 is returned.
 * Return: the number of nodes with at least one child from the given node
 * of the tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}


/**
 * binary_tree_height - measures the height of a node in a binary tree.
 * @tree: pointer to the root node of the tree to measure its height.
 *
 * Algorithm Description: The left and right heights start at -1
 * so that the total height does not include the root as a height.
 * If the tree is NULL, then 0 is returned.
 * Return: the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = -1, right_height = -1;

	if (!tree) /* base condition */
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
