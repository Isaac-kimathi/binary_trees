#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_nd;

	if (!parent)
		return (NULL);

	nw_nd = malloc(sizeof(binary_tree_t));
	if (!nw_nd)
		return (NULL);
	nw_nd->n = value;
	nw_nd->parent = parent;
	nw_nd->right = NULL;
	nw_nd->left = parent->left;
	parent->left = nw_nd;
	if (nw_nd->left)
		nw_nd->left->parent = nw_nd;

	return (nw_nd);
}
