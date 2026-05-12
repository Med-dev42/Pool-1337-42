#include<stdlib.h>

int ft_check_error(char *base);
int ft_atoi_base(char *str,char *base);

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

int ft_nbr_len(int nbr,char *base)
{
	long nb;
	int lenght;
	unsigned int	base_lengh;

	base_lengh = ft_strlen(base);
	lenght = 0;
	if(nbr == 0)
		return 1;
	if(nbr < 0)
	{
		nb = -(long)nbr;
		lenght++;
	}
	else
		nb = nbr;
	
	while(nb > 0)
	{
		nb = nb / base_lengh;
		lenght++;
	}
	return lenght;
}

void ft_putbase(int n, char *res, char *base, int len)
{
	int i;
	int b_len;
	long long nbr;

	nbr = n;
	b_len = 0;
	while (base[b_len]) 
	b_len++;
        if(nbr < 0)
        {
                res[0] = '-';
                nbr = -nbr;
        }
        if(nbr == 0)
                res[0] = base[0];
	i = len - 1;
	while(nbr > 0)
	{
		res[i] = base[nbr % b_len ];
		nbr /= b_len;
		i--;
	}

        res[len] = '\0';
}

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int nb;
	int total_len;
	char *total_res;

	if(ft_check_error(base_from) == 1 || ft_check_error(base_to) == 1)
		return NULL;

	nb = ft_atoi_base(nbr ,base_from);
	total_len = ft_nbr_len(nb, base_to); 
	total_res = malloc((total_len + 1) * sizeof(char));
	if(total_res == NULL)
		return NULL;
	ft_putbase(nb,  total_res, base_to, total_len);
	return total_res;
}
