#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct t_btree
{
	struct t_btree	*left;
	struct t_btree	*right;
	void			data;
}	t_btree;

#endif
