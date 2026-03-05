#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	range = (int *)malloc(sizeof(int) * (max - min));
	if (!range)
	{
		return (NULL);
	}
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

int main()
{
	int *range = ft_range(4, 100);

	for (int i = 0; i < 94; i++)
	{
		printf("range[%d] = %d\n",i,range[i]);
	}
}