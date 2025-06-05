void	ft_rev_int_tab(int *tab, int size)
{
	int *start = tab;
	int	*end = tab + size - 1;
	int	temp;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	size = sizeof(tab) / sizeof(tab[0]);
	int	*ptr = tab;
	
	printf("Size: %d\n", size);
	
	while (ptr < tab + size)
	{
		printf("%d ", *ptr);
		ptr++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	ptr = tab;
	while (ptr < tab + size)
	{	
	printf("%d ", *ptr);
	ptr++;
	}
	printf("\n");
	return (0);
}