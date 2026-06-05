#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>

long long	ft_atoi(char *str)
{
	int	i;
	int	sign;
	long long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (sign * res);
}

void	ft_print(int count, int offest, int i, char *buf)
{
	long long	start;
	long long	limit;
	long long	printed;

	if (count < offest)
	{
		start = 0;
		limit = count;
	}
	else
	{ 
		start= i;
		limit = offest
	}
	printed = 0;
	while (printed < limit)
	{
		write(1, &buf[start], 1);
		start = (start + 1) % offest;
		printed++;
	}
	free(buf);
}

void	ft_tail_stream(int fd, int offest)
{
	char		*buf;
	char		c;
	long long	i;
	long long	count;

	if (offest <= 0)
		return ;
	buf = malloc((offest + 1) * sizeof(char));
	if (buf == 0)
		return ;
	i = 0;
	count = 0;
	while (read (fd, &c, 1) > 0)
	{
		buf[i] = c;
		i = (i + 1) % offest;
		count++;
	}
	ft_print(count, offest, i, buf);
}

int	main(int argc, char **argv)
{
	long long	offset;
	int			file_idx;
	int			fd;

	if (argc < 2)
		return (1);
	offset = 0;
	file_idx = 0;
	if (argv[1][0] == '-' && argv[1][1] == 'c' && argv[1][2] == '\0')
	{
		if (argc < 3)
			return (1);
		offset = ft_atoi(argv[2]);
		file_idx = 3;
	}
	else if (argv[1][0] == '-' && argv[1][1] == 'c')
	{
		offset = ft_atoi(&argv[1][2]);
		file_idx = 2;
	}
	else
		return (1);
	if (file_idx >= argc)
		ft_tail_stream(0, offset);
	else
	{
		fd = open(argv[file_idx], O_RDONLY);
		if (fd == -1)
			return (write(2, "ft_tail: error\n", 15), 1);
		ft_tail_stream(fd, offset);
		close(fd);
	}
	return (0);
}
