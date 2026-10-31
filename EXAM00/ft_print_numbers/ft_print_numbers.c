#include<unistd.h>

void	ft_print_numbers(void)
{
	int digits;

	digits = '0';
	while(digits <= '9')
	{
		write(1,&digits,1);
		digits++;
	}
}
