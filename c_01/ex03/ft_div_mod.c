void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

int	main(void)
{
	int	a = 6;
	int b = 2;
	int	div;
	int mod;
	
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d\nmod: %d\n", div, mod);
	return (0);
}