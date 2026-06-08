#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*node;
	t_list	*tmp;

	node = ft_create_elem(data);
	if (!node)
		return ;
	if (*begin_list == NULL)
	{
		*begin_list = node;
		return ;
	}
	tmp = *begin_list;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = node;
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*node;
	int		i;

	node = NULL;
	i = 0;
	while (i < size)
	{
		ft_list_push_back(&node, strs[i]);
		i++;
	}
	return (node);
}
