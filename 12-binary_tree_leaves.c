#include "binary_trees.h"
#include <stddef.h>

/**
  *binary_tree_leaves - counts the leaves in a binary tree
  *@tree: counts the number of leaves
  *Return: number of leaves
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
