#include "ft_btree.h"

void    apply_level(t_btree *root, int level, int *levels, void (*applyf)(void *, int, int))
{
	int	is_first;
	if (!root)
		return ;
	is_first = (levels[level] == 0);
	applyf(root->item, level, is_first);
	levels[level] = 1;
	apply_level(root->left, level + 1, levels, applyf);
	apply_level(root->right, level + 1, levels, applyf);
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item, int current_level, int is_first_elem))
{
	int	levels[100] = {0};
	apply_level(root, 0,levels, applyf);
}
