#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_size - measures the size of a node in a binary tree
 * @tree: a pointer to tree to measure it's size
 * Return: the size of the tree, 0 if tree is null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lcount;
	size_t rcount;

	if (tree == NULL)
		return (0);

	lcount = binary_tree_size(tree->left);
	lcount++;

	rcount = binary_tree_size(tree->right);
	rcount++;

	return ((lcount + rcount) - 1);
}
