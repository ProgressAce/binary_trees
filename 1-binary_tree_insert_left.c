#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new node as the left child of
 * another node.
 * @parent: pointer to the new node's parent.
 * @value: int value of the new node.
 *
 * If parent already has a left-child then it will be replaced by the new node,
 * and the old left-child will now be the new node's left child.
 * Return: pointer to the new_node, otherwise NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = binary_tree_node(parent, value);

	if (parent)
	{
		if (parent->left) /* place existing left-child */
		{
			child->left = parent->left;
			parent->left->parent = child; /* new parent */
		}
		parent->left = child;
		child->parent = parent;
	}
	else
	{
		return (NULL);
	}

	return (child);
}
