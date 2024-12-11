#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @tree: A pointer to the root node of the tree to count the number of leaves.
 *
 * Return: If tree is NULL, your function must return 0.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)

{
	size_t leafCounter = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	leafCounter += binary_tree_leaves(tree->left);
	leafCounter += binary_tree_leaves(tree->right);

	return (leafCounter);
}
