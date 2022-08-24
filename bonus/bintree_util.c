#include "bintree.h"

bintree_node	*get_left_child_node_bt(bintree_node *node)
{
	return (node->left_child);
}

bintree_node	*get_right_child_node_bt(bintree_node *node)
{
	return (node->right_child);
}

void	delete_bintree(bintree *bintree)
{
	if (bintree)
	{
		delete_bintree_node(&bintree->root_node);
		free(bintree);
		memset(bintree, 0, sizeof(bintree));
	}
}

void	delete_bintree_node(bintree_node **node)
{
	if (*node)
	{
		deleteBinTreeNode(&(*node)->left_child);
		deleteBinTreeNode(&(*node)->right_child);
		free(*node);
		*node = NULL;
	}
}
