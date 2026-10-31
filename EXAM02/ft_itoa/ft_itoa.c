#include<unistd.h>

int ft_nbrlen(long int nbr)
{
	int len;

	len = 0;

	if(nbr == 0)
	{
		return 1;
	}

	if(nbr < 0)
	{
		len++;
		nbr = -nbr;
	}

	while(nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return len;
}

char	*ft_itoa(int nbr)
{
	int i;
	long nb;
	char *res;

	i = ft_nbrlen(nbr);
	nb = nbr;
	res = malloc((i + 1) * sizeof(char));
	if(res == 0)
		return NULL;
	res[i] = '\0';
	i--;
	if (nb == 0)
	{
		res[0] = '0';
	}
	if(nbr < 0)
	{
		res[0] = '-';
		nb = -nb;
	}

	while(nb > 0)
	{
		res[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	return res;
}
