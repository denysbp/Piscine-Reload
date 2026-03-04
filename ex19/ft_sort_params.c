#include <unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return ( s1[i] - s2[i]);
}
void	ft_putchar(char str)
{
	write(1, &str, 1);
}
void	ft_swap(char **a, char **b)
{
	char	*swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while(i < argc - 1)
	{
		j = 1;
		while( j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		i++;
	}
	i = 1;
	while(i < argc)
	{
		j = 0;
		while(argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}