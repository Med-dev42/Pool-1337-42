#include<stdlib.h>

int word_total(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(str[i] != '\0')
	{
		while(str[i] != '\0' && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		{
			i++;
		}

		if(str[i] != '\0')
                {
			count++;

                        while(str[i] != '\0' && !(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
				i++;
                }
	}
	return count;
}

int count_word(char *str)
{
        int  i;
	
        i = 0;
        while(str[i] != '\0' && !(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
        {
                i++;
        }
        return i;
}

char    **ft_split(char *str)
{
	char	**res;
	int	i;
	int	k;
	int	j;
	int	word;
	int	word_len;

	word = word_total(str);
	res = malloc((word + 1) * sizeof(char *));
	if(res == 0)
	{
		return NULL;
	}

	i = 0;
	k = 0;
	while(str[i] != '\0')
	{
		while(str[i] != '\0' && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		{
			i++;
		}
		
		if (str[i] != '\0')
		{
			word_len = count_word(&str[i]);
			res[k] = malloc((word_len + 1) * sizeof(char));
			if(res[k] == 0)
        		{
                		return NULL;
        		}
			j = 0;
			while(j < word_len)
			{
				res[k][j] = str[i];
				i++;
				j++;
			}
			res[k][j] = '\0';
			k++;
		}
	}
	res[k] = NULL;
	return res;
}
