#include "ft_list.h"

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*lst;

	while (*begin_list1 == NULL)
	{
		*begin_list1 = begin_list2;
		return ;
	}

	lst = *begin_list1;
	while (lst->next != NULL)
		lst = lst->next;
	lst->next = begin_list2;
}
