int ft_count_if(char **tab, int (*f)(char*))
{
	int	j;
	int	contador;
	int	resultado;

	contador = 0;
	j = 0;
	resultado = 0;
	while (tab[j])
	{
		resultado = f(tab[j]);
		if (resultado == 1)
		{
			contador++;
		}
		j++;
	}
	return (contador);
}
