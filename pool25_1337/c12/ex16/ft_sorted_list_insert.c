#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*list;
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*lst;
	t_list	*new_node;

	new_node = ft_create_elem(data);
	if (new_node == NULL)
		return ;
	if (*begin_list == NULL || cmp(data, (*begin_list)->data) < 0)
	{
		new_node->next = *begin_list;
		*begin_list = new_node;
		return ;
	}
	lst = *begin_list;
	while (lst->next != NULL && cmp(lst->next->data, data) < 0)
		lst = lst->next;
	new_node->next = lst->next;
	lst->next = new_node;
}
