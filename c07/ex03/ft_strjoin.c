#include<unistd.h>
#include <stdlib.h>

void ft_putchar(char  c)
{
	write(1,&c,1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
}

void ft_copy(int size, char **strs,char *res, char *sep)
{
	int 	i;
	int	j;
		int	k;

	i = 0;
	k = 0;
	while(i < size)
        {
                j = 0;
                while(strs[i][j])
                {
                        res[k] = strs[i][j];
                        j++;
                        k++;
                }

                if(i < size - 1)
                {
                        j = 0;
                        while(sep[j])
                        {
                                res[k] = sep[j];
                                k++;
                                j++;
                        }
                }
                i++;
        }

	res[k] = '\0';
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	unsigned int total_len;
	char *res;
	int	i;
	
	if(size == 0)
	{
		res = malloc(1);
		res[0] = '\0';
		return res;
	}
	i = 0;
	total_len = 0;
	while(i < size )
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	if(size > 0)
		total_len += (ft_strlen(sep) * (size - 1));

	res = (char *)malloc((total_len + 1) * sizeof(char));
	if(res == 0)
		return 0;

	ft_copy(size,strs,res,sep);
	
	return res;
}

int main()
{
	char *name[] = {"Hello", "sir", "bay"};
	char *result;

	result = ft_strjoin(3, name, "-");
	
		ft_putstr(result);
	
	free(result);
	result = NULL;
	return 0;
}
