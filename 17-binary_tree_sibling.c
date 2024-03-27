#include "binary_trees.h"
/**
 * binary_tree_sibling - find the spling of node
 * @node: recive the node
 * Return: the spling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
