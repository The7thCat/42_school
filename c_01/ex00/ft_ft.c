void	ft_ft(int *nbr)
{
	*nbr = 42;
}

#include <stdio.h>

int	main()
{
	int	nbr;

	nbr = 0;
	ft_ft(&nbr);
	printf("nbr: %d", nbr);
	return (0);
}