int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
		return (0);
	while (n <= nb / n)
	{
		if(n * n == nb)
			return (n);
		n++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	int	nb = 16;
	int r;

	r = ft_sqrt(nb);
	printf("sqrt: %d", r);
	return (0);
}