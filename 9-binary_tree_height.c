#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
  *binary_tree_height - measures the height of a tree
  *@tree: pointer to tree to traverse
  *Return: size_t
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ldepth;
	size_t rdepth;

	if (tree == NULL)
		return (0);

	if (tree->left)
		ldepth = (binary_tree_height(tree->left)) + 1;
	else
		ldepth = 0;
	if (tree->right)
		rdepth = (binary_tree_height(tree->right)) + 1;
	else
		rdepth = 0;

	if (ldepth > rdepth)
		return (ldepth);
	else
		return (rdepth);
}
