#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref, int (*cmpf)(void *, void *))
{
	if (root == NULL)
		return (NULL);
	if (cmpf(root->data, data_ref) == 0)
		return (root->data);
	if (cmpf(root->data, data_ref) < 0)
	{
		return (btree_search_item(root->left, data_ref, cmpf));
	}
	else
		return (btree_search_item(root->right, data_ref, cmpf));
}
