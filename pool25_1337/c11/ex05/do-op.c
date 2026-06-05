#include "ft.h"

void	ft_check_zero(int a, int b, char op)
{
	if (op == '/')
	{
		if (b == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(a / b);
	}
	else if (op == '%')
	{
		if (b == 0)
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(a % b);
	}
}

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;

	if (argc != 4)
		return (write(1, "\n", 1), 0);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	if (argv[2][0] == '+')
		ft_putnbr(n1 + n2);
	else if (argv[2][0] == '-')
		ft_putnbr(n1 - n2);
	else if (argv[2][0] == '*')
		ft_putnbr(n1 * n2);
	else if (argv[2][0] == '%' || argv[2][0] == '/')
		ft_check_zero(n1, n2, argv[2][0]);
	else
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}
