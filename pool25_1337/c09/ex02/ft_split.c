/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kenny <kenny@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 19:40:00 by kenny             #+#    #t42.fr         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char c, char *charset);
int		size_word(char *str, char *charset);
void	ft_wrong(char **res, int j);

int	count_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_separator(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !is_separator(str[i], charset))
			i++;
	}
	return (count);
}

char	*ft_create_word(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	len = size_word(str, charset);
	word = malloc((len + 1) * sizeof(char));
	if (word == 0)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		j;

	res = malloc((count_word(str, charset) + 1) * sizeof(char *));
	if (res == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_separator(str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			res[j] = ft_create_word(&str[i], charset);
			if (res[j++] == 0)
				return (ft_wrong(res, j - 1), NULL);
			while (str[i] != '\0' && !is_separator(str[i], charset))
				i++;
		}
	}
	res[j] = NULL;
	return (res);
}
