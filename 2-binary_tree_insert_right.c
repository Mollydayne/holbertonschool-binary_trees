#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: A pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the new node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newChild;

	if (parent == NULL)
		{
			return (NULL);
		}

		newChild = malloc(sizeof(binary_tree_t));

if (newChild == NULL)
{
	return (NULL);
}

newChild->n = value;

	if (newChild->n == '\0')
	{
		free(newChild);
		return (NULL);
	}

	newChild->left = NULL;
	newChild->right = parent->right;

	if (newChild->right != NULL)
		newChild->right->parent = newChild;

	parent->right = newChild;
	newChild->parent = parent;

	return (newChild);
}
