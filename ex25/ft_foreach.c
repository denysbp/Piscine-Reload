// #include <unistd.h>
// void    ft_putnbr(int x)
// {
//     if (x == -2147483648)
//     {
//         write(1, "-2147483648", 11);
//         return ;
//     }
//     if (x < 0)
//     {
//         write(1, "-", 1);
//         x *= -1;
//     }
//     if (x >= 10)
//     {
//         ft_putnbr(x/10);
//     }
//     write(1, &"0123456789"[x % 10], 1);
// }
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while(i < length)
	{
		f(tab[i]);
		i++;
	}
}

// int main()
// {
//     int tab[4] = {1,3,5,2};
//     ft_foreach(tab, 4, &ft_putnbr);
//     return (0);
// }