#include<stdlib.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}

	return i;
}

int ft_is_separator(char *charset, char c)
{
	int i;

	i = 0;
	while(charset[i] != '\0')
	{
		if(charset[i] == c)
		{
			return 1;
		}
		i++;
	}
	return 0;
}

int ft_count_words(char *str, char *charset)
{
	int n_words;
	int i;
	int len;

	i = 0;
	n_words = 0;
	while(str[i] != '\0')
	{
		while(str[i] != '\0' && ft_is_separator(charset, str[i]) == 1)
		{
			i++;
		}

		if(str[i] != '\0' && ft_is_separator(charset, str[i]) == 0)
		{
			n_words++;
			while(str[i] != '\0' && ft_is_separator(charset, str[i]) == 0)
			{
				i++;
			}
		}
	}

	return n_words;
}

int ft_word_len(char *str, char *charset)
{
	int i;

	i = 0;
	while(str[i] != '\0' && ft_is_separator(charset, str[i]) == 0)
	{
		i++;
	}
	return i;
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{

	char *start = dest;
	if(src == NULL || dest == NULL)
	{
		return NULL;
	}

	while(*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	while(n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return start;
}

char **ft_split(char *str, char *charset)
{
	char	**res;
	int	word_len;
	int     nb_words;
	int	i;
	int	j;

	i = 0;
	j = 0;
	nb_words = ft_count_words(str ,charset);
	res = (char **)malloc((nb_words + 1) * sizeof(char *));
	if(res == NULL)
		return NULL;
	while(str[i] != '\0')
	{
		while(str[i] != '\0' && ft_is_separator(charset, str[i]) == 1)
			i++;
		if(str[i] != '\0' && ft_is_separator(charset, str[i]) == 0)
		{
			word_len = ft_word_len(&str[i],charset);
			res[j] = (char *)malloc((word_len + 1) * sizeof(char));
			ft_strncpy(res[j], &str[i], word_len);
			res[j][word_len] = '\0';
			j++;
			i += word_len;
		}
	}
	res[j] = 0;
	return res;
}
