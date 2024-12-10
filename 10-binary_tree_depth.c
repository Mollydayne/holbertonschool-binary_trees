#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * @tree: A pointer to the node to measure the depth of.
 *
 * Return: If tree is NULL, your function must return 0.
 */

size_t binary_tree_depth(const binary_tree_t *tree)

{
	size_t nodeCounter = 0;

	if (tree == NULL)
	{
		return (0);
	}

while (tree->parent != NULL)
{
	nodeCounter++;
	tree = tree->parent;
}

return (nodeCounter);
}
