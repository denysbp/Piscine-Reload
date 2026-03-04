#include <stdlib.h>

void	call_malloc(int max, int min, int *range)
{
	if (max > min)
	{
		range = (int *)malloc(sizeof(int) * ((max - min) + 1));
	}
	else
	{
		range = (int *)malloc(sizeof(int) * ((min - max) + 1));
	}
}

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	call_malloc(max, min, range);
	while (max != min)
	{
		range[i++] = max;
		if (max > min)
		{
			max += 1;
		}
		else
		{
			max -= 1;
		}
	}
	range[i] = max;
	return (range);
}
