#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*new_node;

	new_node = malloc(sizeof(t_btree));
	if (!new_node)
		return (NULL);
	new_node->data = item;
	new_node->lift = NULL;
	new_node->right = NULL;
	return (new_node);
}
