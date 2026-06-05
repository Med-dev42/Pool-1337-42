#include <unistd.h>
#include <fcntl.h>

#define BUF_COUNT 1024

int	main(int argc, char **argv)
{
	int			ft;
	ssize_t		bytes_read;
	char		buf[BUF_COUNT];

	if (argc < 2)
		return (write(2, "File name missing.\n", 19), 1);
	if (argc > 2)
		return (write(2, "Too many arguments.\n", 20), 1);
	ft = open(argv[1], O_RDONLY);
	if (ft == -1)
		return (write(2, "Cannot read file.\n", 18), 1);
	bytes_read = read(ft, buf, BUF_COUNT);
	while (bytes_read > 0)
	{
		write(1, buf, bytes_read);
		bytes_read = read(ft, buf, BUF_COUNT);
	}
	close(ft);
	return (0);
}
