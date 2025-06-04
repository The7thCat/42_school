#include <unistd.h>

void ft_print_combn(int n)
{
	int	c[10];
	int	i;

	if (n <= 0 || n >= 10)
		return;
	i = 0;
	while (i < n)
	{
		c[i] = i;
		i++;
	}
	while (1)
	{
		i = 0;
		while (i < n)
			write(1, &"0123456789"[c[i++]], 1);
		i = n - 1;
		while (i >= 0 && c[i] == 10 - n + i)
			i--;
		if (i < 0)
			break;
		write(1, ", ", 2);
		c[i]++;
		while (++i < n)
			c[i] = c[i - 1] + 1;
	}
}

int main(void)
{
	int	n = 2;
	ft_print_combn(n);
	return (0);
}