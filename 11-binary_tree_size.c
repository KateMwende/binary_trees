#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_size - measures the size of a node in a binary tree
 * @tree: a pointer to tree to measure it's size
 * Return: the size of the tree, 0 if tree == NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t lcount = binary_tree_size(tree->left);

	lcount++;

	size_t rcount = binary_tree_size(tree->right);

	rcount++;

	return ((lcount + rcount) - 1);
}
