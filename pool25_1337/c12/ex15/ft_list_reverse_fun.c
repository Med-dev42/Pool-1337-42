t_list	*ft_loops(t_list *node, int step)
{
	while (step > 0)
	{
		node = node->next;
		step--;
	}
	return (node);
}

void	ft_change_the_place(t_list *begin_list, int size)
{
	int	count;
	t_list	*end;
	t_list	*start;
	void    *tmp;

	count = 0;
	while (count < size / 2)
	{
		end = ft_loops(begin_list, count);
		start = ft_loops(begin_list, size - 1 - count);
		tmp = start->data;
		start->data = end->data;
		end->data = tmp;
		count++;
	}
}

void ft_list_reverse_fun(t_list *begin_list)
{
	int	size;
	t_list	*start;
	
	size = 0;
	start = begin_list;
	while (start)
	{
		size++;
		start = start->next;
	}
	if (size > 1)
		ft_change_the_place(begin_list, size);
}
