#include "binary_trees.h"
/**
 * binary_tree_depth - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree, or 0 if tree is NULL
 */
int binary_tree_depth(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL)
		return (0);
	balance += binary_tree_depth(tree->left);
	balance -= binary_tree_depth(tree->right;

	return (balance);
}
