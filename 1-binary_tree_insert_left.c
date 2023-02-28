#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node or Null on failure
 *
 * Description: if parent already has a left-child, the new node must
 * take its place, and the old left-child must be set as the left-child
 * of the new node.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *temp;

	node = binary_tree_node(parent, value);

	if (parent && node)
	{
		if (!(parent->left))
		{
			parent->left = node;
			return (node);
		}
		temp = parent->left;
		parent->left = node;
		temp->parent = node;
		node->left = temp;
		return (node);
	}

	return (NULL);
}
