#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to traverse.
 * Return: 0 if tree is NULL, the number of nodes
 * with at least 1 child in a binary tree otherwise.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count;
	size_t right_count;
	size_t sum_left_right;

	if (tree == NULL)
		return (0);

	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);
	sum_left_right = left_count + right_count;

	return ((tree->left || tree->right) ? 1 + sum_left_right : sum_left_right);
}
