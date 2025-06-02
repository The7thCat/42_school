int	ft_is_prime(int nb)
{
	int	n;

	if (nb < 2)
		return (0);
	n = 2;
	while (n <= nb / n)
	{
		if(nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

#include <stdio.h>
int	main()
{
	int	r;
	int	nb = 41;

	r = ft_is_prime(nb);
	printf("1 for prime and 0 for not prime: %d", r);
	return (0);
}