#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of nodes.
 * 
 * Implementation: Go to last nodes with recursion. If a node is has at least
 * one child then the counter is incremented. If not then it remains the same.
 * 
 * If the tree is NULL, then 0 is returned.
 * Return: the number of nodes with at least one child from the given node
 * of the tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree) /* base condition */
	{
		return (0);
	}

	counter = binary_tree_nodes(tree->left);
	counter += binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
	{
		return (counter + 1);
	}
	return (counter);
}
