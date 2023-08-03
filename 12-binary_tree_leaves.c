#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves.
 *
 * Implementation: Go to last nodes with recursion. If a node is a leaf node
 * then the leaf counter is incremented. If not then it remains the same.
 *
 * A node which does not have a left or right child is a leaf.
 * If the tree is NULL, then 0 is returned.
 * Return: the number of leaves of the given node of the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count = 0;

	if (!tree) /* base condition */
	{
		return (0);
	}

	leaf_count = binary_tree_leaves(tree->left);
	leaf_count += binary_tree_leaves(tree->right);

	if (binary_tree_is_leaf(tree))
	{
		return (leaf_count + 1);
	}
	return (leaf_count);
}


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
