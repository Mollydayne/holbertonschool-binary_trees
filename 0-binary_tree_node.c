#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 *
 * @parent: A pointer to the parent node of the node to create.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to newNode, or NULL if memory allocation fails.
 *
 * Description: allocates memory for a new binary tree node, assigns
 * the provided value to it, and sets its left and right children to NULL.
 * The parent pointer is also set to link the new node to its parent.
 * If memory allocation fails, the function returns NULL.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;

newNode = malloc(sizeof(binary_tree_t));
if (newNode == NULL)
{
	return (NULL);
}
newNode->n = value;

if (newNode->n == '\0')
{
	free(newNode);
	return (NULL);
}

newNode->parent = parent;
newNode->left = NULL;
newNode->right = NULL;
return (newNode);

}
