/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Mohamed <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 19:15:00 by Mohamed           #+#    #t42.fr         */
/*                                                                            */
/* ************************************************************************** */

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	size_word(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && !is_separator(str[i], charset))
		i++;
	return (i);
}

void	ft_wrong(char **res, int j)
{
	while (j > 0)
	{
		j--;
		free(res[j]);
	}
	free(res);
}
