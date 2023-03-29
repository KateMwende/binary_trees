#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
  *binary_tree_insert_left - insert a left child
  *@parent: pointer to the parent node
  *@value: value pf the node
  *Return:  pointer to the new node or NULL on failure
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = parent->left;
	new->right = NULL;

	return (new);
}
