#include <fcntl.h>
#include <unistd.h>

void	abrir(int fd, char *buffer, int buf_size)
{
	int	bytes_lidos;

	bytes_lidos = read(fd, buffer, buf_size);
	if (bytes_lidos == -1)
	{
		write(2, "Cannot read file.\n", 18);
		close(fd);
		return ;
	}
	while (bytes_lidos > 0)
	{
		write(1, buffer, bytes_lidos);
		bytes_lidos = read(fd, buffer, buf_size);
	}
}

void	fechar(int argc)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
	}
}

int	main(int argc, char **argv)
{
	char	buffer[100];
	int		fopen;
	int		bytes_lidos;

	if (argc != 2)
	{
		fechar(argc);
		return (1);
	}
	fopen = open (argv[1], O_RDONLY);
	if (fopen == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	bytes_lidos = read (fopen, buffer, sizeof(buffer) - 1);
	abrir(fopen, buffer, bytes_lidos);
	close(fopen);
	return (0);
}
