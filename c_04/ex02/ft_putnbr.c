#include <unistd.h>

void ft_calc(int nb)
{
    int i;
    char c[10];
	int	digit;

	while (nb != 0)
		{
			digit = nb % 10;
			if (digit < 0)
				digit = -digit;
			c[i++] = '0' + digit;
			nb /= 10;
		}
	while (i > 0)
		{
			i--;
			write(1, &c[i], 1);
		}
}

void    ft_putnbr(int nb)
{
    if (nb == 0)
	{
        write(1, "0", 1);
		return;
	}
    if (nb < 0)
    {
        write(1, "-", 1);
        ft_calc(nb);
    }
    if (nb > 0)
    	ft_calc(nb);
}

int main(void)
{
    ft_putnbr(0);
    write(1, "\n", 1);
//max number 2147483647
// min number -2147483648
}