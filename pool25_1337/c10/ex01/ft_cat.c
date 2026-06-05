#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>

#define BUF_COUNT 29

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_read_file(char *str)
{
	int			ft;
	ssize_t		byte_s;
	char		buf[BUF_COUNT];

	ft = open(str, O_RDONLY);
	if (ft == -1)
	{
		write(2, "ft_cat: ", 8);
		write(2, str, ft_strlen(str));
		write(2, " : ", 3);
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		write(2, "\n", 1);
		return ;
	}
	byte_s = read(ft, buf, BUF_COUNT);
	while (byte_s > 0)
	{
		write (1, buf, byte_s);
		byte_s = read(ft, buf, BUF_COUNT);
	}
	close(ft);
}

void	ft_read_word(void)
{
	ssize_t	byte_s;
	char	buf[BUF_COUNT];

	byte_s = read(0, buf, BUF_COUNT);
	while (byte_s > 0)
	{
		write(1, buf, byte_s);
		byte_s = read(0, buf, BUF_COUNT);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		ft_read_word();
	}
	else if (argc > 1)
	{
		while (i < argc)
		{
			ft_read_file(argv[i]);
			i++;
		}
	}
	return (0);
}
