int	ft_iterative_factorial(int nb)
{
	int	i;
	int	resultado;

	resultado = 0;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i < nb)
	{
		resultado = i * nb;
		i++;
	}
	return (resultado);
}
