#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 *
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a leaf, otherwise 0.
 *
 * Description: checks if a given node is a leaf, meaning it has no children.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
{
	return (0);
}

if (node->left == NULL && node->right == NULL)
{
	return (1);
}
else
	{
	return (0);
	}
}
