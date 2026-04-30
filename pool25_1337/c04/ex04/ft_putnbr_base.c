#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_errors(char *base,int *error)
{
	int i;
	int j;

	if( base[0] == '\0' && base[1] == '\0')
	{
		*error = 1;
	}

	i = 0;
	j = 0;
	while(base[i] != '\0' && *error == 0)
	{
		j =  i + 1;
		while(base[j] != '\0')
		{
			if(base[i] == base[j])
			{
				*error = 1;
			}	

			if(base[j] == '-' || base[j] == '+')
			{
				*error = 1;
			}

			if(base[i] < 33 || base[i] > 126)
			{
				*error = 1;
                        }
			j++;
		
		}
		i++;
	}
}

void ft_putnbr_base(int nbr, char *base)
{
	int lbase;
	int error;
	long nb;
	
	error = 0;
	lbase = 0;
	ft_errors(base,&error);

	nb = nbr;
	if(error == 0)
	{

		if(nb <lbase)
		{
			write(1,"-",1);
			nb = nb * -1;
		}

		while(base[lbase])
		{
			lbase++;
		}
		if(nb < lbase)
		{
			lbase++;
		}

		if(nb >= lbase)
		{
			ft_putnbr_base(nb / lbase, base);
		}
		ft_putchar(base[nb % lbase]);
	}
}

int main()
{
	ft_putnbr_base(100, "01");
	return 0;
}
