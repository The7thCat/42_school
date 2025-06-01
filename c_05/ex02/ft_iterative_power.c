int	ft_iterative_power(int nb, int power)
{
	int	n;
	
	n = nb;
	if (power < 0)
		return (0);	
	if (nb == 0 && power == 0)
		return (1);
	while(power > 1)
	{
		n = n * nb;
		power--;
	}
	return (n);
}

#include <stdio.h>

int	main(void)
{
	int	nb = 2;
	int	power = 3;
	int	r;

	r = ft_iterative_power(nb, power);
	printf("Result: %d", r);
	return (0);
}