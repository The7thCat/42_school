void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = tmp / *b;
	*b = tmp % *b;
}

#include <stdio.h>

int	main(void)
{
	int	a = 6;
	int b = 2;
	
	ft_ultimate_div_mod(&a, &b);
	printf("div: %d\nmod: %d\n", a, b);
	return (0);
}