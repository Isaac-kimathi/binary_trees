#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * 
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree or 0 if the tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_lft = 0;
	size_t height_rgt = 0;
	if (!tree)
		return (0);

	height_lft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_rgt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_lft > height_rgt ? height_lft : height_rgt);
}
