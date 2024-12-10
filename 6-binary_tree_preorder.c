#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 *
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node. The function must take
 * a single argument of type int and return void.
 *
 * Description: If tree or func is NULL, do nothing.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))

{
    if (tree == NULL || func == NULL)
    {
        return;
    }

    func(tree->n);
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
}