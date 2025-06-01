int	ft_recursive_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power < 0)
		return (0);	
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	return (n * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>
int	main(void)
{
	int	nb = 2;
	int	power = 2;
	int	r;

	r = ft_recursive_power(nb, power);
	printf("Result: %d", r);
	return (0);
}