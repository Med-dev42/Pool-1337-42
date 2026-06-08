t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*node;
	int	i;

	node = begin_list;
	i = 0;
	while (node != NULL)
	{
		if (i == nbr)
		{
			return (node);
		}
		node = node->next;
		i++;
	}
	return (NULL);
}
