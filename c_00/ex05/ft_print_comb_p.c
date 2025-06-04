#include <unistd.h>

void ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;
	char digits[3];

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1
			while (c <= 9)
			{
				digits[0] = a + '0';
				digits[1] = b + '0';
				digits[2] = c + '0';
				write(1, &digit[0], 1);
				write(1, &digit[1], 1);
				write(1, &digit[2], 1);
				if (!(a == 7 && b == 8 && c == 9))
					write(1, ", ", 1);
			}
			c++;
		}
		b++
	}
	a++;
}

int main()
{
	ft_print_comb();
	return (0);
}