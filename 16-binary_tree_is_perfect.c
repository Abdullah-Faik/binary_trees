#include "binary_trees.h"
/**
 * binary_tree_depth_1 - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree, or 0 if tree is NULL
 */
int binary_tree_depth_1(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_depth_1(tree->left);
	right_height = binary_tree_depth_1(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not perfect or tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	binary_tree_is_perfect(tree->left);
	binary_tree_is_perfect(tree->right);
	if (binary_tree_depth_1(tree->left) !=
		binary_tree_depth_1(tree->right))
		return (0);

	if ((tree->left == NULL && tree->right == NULL) ||
		(tree->left != NULL && tree->right != NULL))
		return (1);

	return (0);
}
