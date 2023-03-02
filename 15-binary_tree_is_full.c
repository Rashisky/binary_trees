#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, return 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0;

	if (tree && ((tree->left && tree->right) ||
	(!(tree->left) && !(tree->right))))
	{
		if ((tree->left && tree->right))
			l = binary_tree_is_full(tree->left) + binary_tree_is_full(tree->right);

		if (l == 0 || l == 2)
			return (1);
		return (0);
	}
	return (0);
}
