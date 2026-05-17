#include<unistd.h>

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while(s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;

		if(s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return count;
}

static char	*alloc_word(char const *s, int start, int finish)
{
	char *word;
	int size;
	int i;
	
	i = 0;
	size = finish - start;
	word = malloc((size + 1) * sizeof(char));
	if(word == 0)
		return NULL;
	while(start < finish)
	{
		word[i] = s[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return word;
}

static void	free_all(char **lst, int i)
{
	while(i > 0)
	{
		i--;
		free(lst[i]);
	}
	free(lst);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	start;
	char	**lst;

	if(s == 0)
		return NULL;
	lst = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (lst == 0)
    		return (NULL);
	i = 0;
	j = 0;
	while(s[i] != '\0')
	{
		while(s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			lst[j] = alloc_word(s, start, i) ;
			if(lst[j] == 0)
			{
				free_all(lst, j);
				return (NULL);
			}
			j++;
		}
	}
	lst[j] = NULL;
	return lst;
}

