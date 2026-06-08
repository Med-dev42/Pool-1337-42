t_list	*ft_create_elem(char *data)
{
	t_list	*res;

	res = malloc(sizeof(t_list));
	if(!res)
		return (NULL);
	res->data = data;
	res->next = NULL;
	return	(res);
}

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_node;

	new_node = ft_create_elem(data);
	if (!new_node)
		return ;
	new_node->next = *begin_list;
	*begin_list = new_node;
}
