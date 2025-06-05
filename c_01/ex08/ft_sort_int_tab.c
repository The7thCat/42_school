void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	*ptr1;
	int	*ptr2;
	int	swap;

	swap = 1;
	while (swap)
	{
		swap = 0;
		ptr1 = tab;
		while (ptr1 < tab + size - 1)
		{
			ptr2 = ptr1 + 1;
			if(*ptr1 > *ptr2)
			{
				temp = *ptr1;
				*ptr1 = *ptr2;
				*ptr2 = temp;
				swap = 1;
			}
			ptr1++;
		}
	}
}

#include <stdio.h>

int	main(void)
{
	int	tab[] = {4, 6, 2, 1, 8, 9, 7, 3, 5};
	int	size = sizeof(tab) / sizeof(tab[0]);
	int *ptr = tab;

	printf("Size: %d\n", size);
	while (ptr < tab + size)
	{
		printf("%d ", *ptr);
		ptr++;
	}
	printf("\n");
	ft_sort_int_tab(tab, size);
	ptr = tab;
	while (ptr < tab + size)
	{	
	printf("%d ", *ptr);
	ptr++;
	}
	printf("\n");
	return (0);
}