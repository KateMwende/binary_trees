#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to tree to measure the depth of the node
 * Return: the depth of the tree, 0 if tree == NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	size_t i = binary_tree_depth(tree->parent);

	i++;

	return (i);
}
