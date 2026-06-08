#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*lst;
	t_list	*tmp;

	if (begin_list == NULL || data_ref == NULL)
		return ;
	while (*begin_list != NULL && cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = (*begin_list)->next;
		free_fct((*begin_list)->data);
		free(*begin_list);
		*begin_list = tmp;
	}
	lst = *begin_list;
	while (lst != 0 && lst->next != 0)
	{
		if (cmp(lst->next->data, data_ref) == 0)
		{
			tmp = lst->next->next;
			free_fct(lst->next->data);
			free(lst->next);
			lst->next = tmp;
		}
		else
			lst = lst->next;
	}
}
