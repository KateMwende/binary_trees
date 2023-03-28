#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree mode
 * @parent: parent node
 * @value: value of the node
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->data = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}