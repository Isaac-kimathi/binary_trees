#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * parent: pointer to the parent node of the node to create
 * value: value to put in the new node
 * return: binary_tree_t
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_nd;

	nw_nd = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (nw_nd == NULL)
	{
		return (NULL);
	}

	nw_nd->parent = parent;
	nw_nd->n = value;
	nw_nd->left = NULL;
	nw_nd->right = NULL;

	return (nw_nd);
}
