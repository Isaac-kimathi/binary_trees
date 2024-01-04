#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_nd;

	if (!parent)
		return NULL;

	nw_nd = malloc(sizeof(binary_tree_t));
	if (nw_nd == NULL)
		return NULL;

	nw_nd->n = value;
	nw_nd->parent = parent;
	nw_nd->left = NULL;
	nw_nd->right = parent->right;
	parent->right = nw_nd;
	if (nw_nd->right)
		nw_nd->right->parent = nw_nd;

	return nw_nd;
}
