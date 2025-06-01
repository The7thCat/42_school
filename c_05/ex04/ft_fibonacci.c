int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdio.h>
int	main(void)
{
	int	index;
	int	r;

	index = -5;
	r = ft_fibonacci(index);
	printf("n-th fibonacci: %d", r);
}