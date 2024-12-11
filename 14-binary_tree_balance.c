#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to traverse.
 * Return: size of the tree, or 0 if tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: A pointer to the root node of the tree
 *
 * Return: If tree is NULL, your function must return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)

{
		int leftSize = 0;
		int rightSize = 0;
		int balanceFactor;

	if (tree == NULL)
	{
	return (0);
	}

	while (tree->left != NULL && tree->right != NULL)
	{
		rightSize++;
		tree = tree->right;
	}
	{
		leftSize++;
		tree = tree->left;
	}

	balanceFactor = leftSize - rightSize;

	return (balanceFactor);
}
