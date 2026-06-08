#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct t_list
{
	void			*list;
	struct t_list	*next;
}	t_list;

#endif
