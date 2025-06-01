#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;
	int	n;

	n = nb;
	fac = 1;

	if (nb < 0)
		return (0);
	while(n > 1)
	{
		fac *= n;
		n--;
	}
	return (fac);
}

int main(void)
{
	int	nb = -4;
	int	r;

	r = ft_iterative_factorial(nb);
	printf("Factorial: %d\n", r);
}