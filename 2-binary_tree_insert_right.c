#include "binary_trees.h"


/**
 * binary_tree_insert_right - inserts a new node as the right child of
 * another node.
 * @parent: pointer to the new node's parent.
 * @value: int value of the new node.
 *
 * If parent already has a right-child then it will be replaced by the new
 * node, and the old right-child will now be the new node's right child.
 * Return: pointer to the new_node, otherwise NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = binary_tree_node(parent, value);

	if (parent)
	{
		if (parent->right) /* place existing left-child */
		{
			child->right = parent->right;
			parent->right->parent = child; /* new parent */
		}
		parent->right = child;
		child->parent = parent;
	}
	else
	{
		return (NULL);
	}

	return (child);
}
