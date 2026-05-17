#include<unistd.h>

int	ft_len(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
	{
		len = 11;
		return len;
	}
	else if (nb == 0)
        {
                return 1;
	}
	else if (nb < 0)
	{
		len++;
		nb = -nb;
	}

	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return len;
}

char	*ft_itoa(int nbr)
{
	int i;
	long nb;
	char *n;

	nb = nbr;
	i = ft_len(nb) ;
	n = (char *)malloc((i + 1) * sizeof(char));
	if(n == 0)
		return NULL;
	n[i] = '\0';
	if (nb == 0)
		n[0] = '0';
	if (nb < 0)
	{
		n[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		i--;
		n[i] = nb % 10 + '0';
		nb /= 10;
	}
	return n;
}
