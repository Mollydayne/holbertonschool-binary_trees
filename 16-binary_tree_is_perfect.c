#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse.
 * Return: the height of a binary tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left_height > right_height ? left_height : right_height);
}

/**
 * is_perfect_helper - helper function to check if the tree is perfect
 * @tree: pointer to the root node of the tree
 * @height: the height of the tree
 * @nodeLevel: current level of the node
 * Return: 1 if perfect, 0 if not perfect
 */
int is_perfect_helper(const binary_tree_t *tree, int height, int nodeLevel)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (height == nodeLevel + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_helper(tree->left, height, nodeLevel + 1) &&
			is_perfect_helper(tree->right, height, nodeLevel + 1));
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 *  @tree: A pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0.
 *      Otherwise, your function must return 1 if the tree is perfect.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)

{
	int totalHeight = binary_tree_height(tree);
	return (is_perfect_helper(tree, totalHeight, 0));
}
