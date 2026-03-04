#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;

	int	i;

	i = 0;
	if (max > min)
	{
		range = (int *)malloc(sizeof(int) * ((max - min) + 1));
	}
	else
	{
		range = (int *)malloc(sizeof(int) * ((min - max) + 1));
	}
	while(max != min)
	{
		range[i++] = max;
		max += (max > min) ? 1 : -1;
	}
	range[i] = max;
	return (range);
}