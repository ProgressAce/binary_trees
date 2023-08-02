#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node.
 * @parent: pointer to the new node's parent.
 * @value: the new node's value.
 *
 * The new node does not have any children when created.
 * Return: the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = malloc(sizeof(binary_tree_t));
	if (!child)
	{
		return (NULL);
	}

	child->parent = parent;
	child->n = value;
	child->left = NULL;
	child->right = NULL;

	return (child);
}
