#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
  *binary_tree_nodes - find trees with atleast 1 child
  *@tree: tree to find nodes
  *Return: number of nodes with a child
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}
