void	ft_add_to_list(t_list **curr, t_list **list2)
{
	t_list	*tmp;

	tmp = (*curr)->next;
	(*curr)->next = *list2;
	*list2 = (*list2)->next;
	(*curr)->next->next = tmp;
}

void	ft_sorted_list_merge(t_list **begin1, t_list *begin2, int (*cmp)())
{
	t_list	*curr;
	t_list	*tmp;

	if (!begin2)
		return ;
	if (!*begin1 || cmp((*begin1)->data, begin2->data) > 0)
	{
		tmp = *begin1;
		*begin1 = begin2;
		begin2 = begin2->next;
		(*begin1)->next = tmp;
	}
	curr = *begin1;
	while (curr->next && begin2)
	{
		if (cmp(curr->next->data, begin2->data) > 0)
			ft_add_to_list(&curr, &begin2);
		curr = curr->next;
	}
	if (begin2)
		curr->next = begin2;
}
