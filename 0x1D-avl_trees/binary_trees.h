#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s avl_t;

int binary_tree_is_avl(const binary_tree_t *tree);
int bst_check(const binary_tree_t *root, int min, int max);
int b_check(const binary_tree_t *root);
int h_check(const binary_tree_t *root);
void binary_tree_print(const binary_tree_t *tree);

#endif /*BINARY_TREES_H*/