#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*lst;
	void	*tmp;

	if (begin_list == NULL || *begin_list == NULL)
		return;
	lst = *begin_list;
	while (lst != 0 && lst->next != 0)
	{
		if (cmp(lst->data, lst->next->data) > 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;

			lst = *begin_list;
		}
		else
			lst = lst->next;
	}
}
