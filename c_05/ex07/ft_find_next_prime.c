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

int	ft_find_next_prime(int nb)
{
	nb++;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

#include <stdio.h>
int	main()
{
	int	r;
	int	nb = 7;

	r = ft_find_next_prime(nb);
	printf("Next prime: %d", r);
	return (0);
}