void ft_list_reverse(t_list **begin_list)
{
	t_list	*we_here;
	t_list	*we_take;
	t_list	*we_go_to;

	we_here = NULL;
	we_take = *begin_list;
	while (we_take != NULL)
	{
		we_go_to = we_take->next;
		we_take->next = we_here;
		we_here = we_take;
		we_take = we_go_to;
	}
	*begin_list = we_here;
}
