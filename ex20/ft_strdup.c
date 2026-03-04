#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
	}
	s1[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*dup;

	if (*src == NULL)
	{
		return (NULL);
	}
	*dup = (char *)malloc(ft_strlen(src) + 1);
	ft_strcpy(dup, src);
	return (dup);
}
