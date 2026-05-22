int ft_word_count(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
        {
		while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		{
			i++;
		}

		if(str[i] != '\0')
		{
			count++;
		}

		while(str[i] != '\0' && !(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		{
			i++;	
		}
	}
	return count;
}

int word_len(char *str)
{
	int len;

	len = 0;
	while(str[len] != '\0' && !(str[len] == ' ' || (str[len] >= 9 && str[len] <= 13)))
	{
		len++;
	}
	return len;
}


void	ft_free_all(char **res, int j)
{
	while (j > 0)
	{
		j--;
		free(res[j]);
	}
	free(res);
}

int ft_word_mallo(char *str, char **res)
{
	int j;
	int k;
	int i;
	int word_size;

	i = 0;
	j = 0;
	while(str[i] != '\0')
	{
                while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
                        i++;

                if(str[i] != '\0')
                {
                	word_size = word_len(&str[i]);
                	res[j] = malloc((word_size + 1) * sizeof(char));
                	if (res[j] == 0)
			{
				ft_free_all(res, j); 
				return 0;
			}
                	k = 0;
                	while(k  < word_size)
                	{
				res[j][k] = str[i];
				i++;
				k++;
			}
                	res[j][k] = '\0';
                	j++;
		}
	}
	res[j] = NULL;
	return 1;
}

char    **ft_split(char *str)
{
	char **res;
	int word_count;

	if (str == NULL)
                return (NULL);
	word_count = ft_word_count(str);
	res = malloc((word_count + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	if (ft_word_mallo(str, res) == 0)
		return (NULL);
	return res;
}
