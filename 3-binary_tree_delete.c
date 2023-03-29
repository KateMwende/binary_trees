#include "binary_tree.h"
#include <stdlib.h>
#include <stddef.h>

/**
  *binary_tree_delete - delete an entire binary tree
  *@tree: tree to be deleted
  *Return: void
  */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);

		free(tree);
	}
}
