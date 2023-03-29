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
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));
	if (left_node == NULL)
		return (NULL);

	left_node->n = value;
	left_node->parent = parent;
	left_node->right = NULL;
	
	if (parent->left == NULL)
		left_node->left = NULL;
	else
	{
		left_node->left = parent->left;
		parent->left = left_node;
	}
	return (left_node);
}
