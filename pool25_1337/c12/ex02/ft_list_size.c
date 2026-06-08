int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	while (begin_list != NULL)
	{
		begin_list = begin_list->next;
		size++;
	}
	return (size);
}
