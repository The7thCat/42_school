#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	num[10];
	char	*ptr = num; 
	
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return;
	}
	while (nb > 0)
	{
		*ptr = (nb % 10) + '0';
		nb = nb / 10;
		ptr++;
	}
	ptr--;
	while (ptr >= num)
	{
		write(1, ptr, 1);
		ptr--;
	}

}
int	main (void)
{
	int	nb = 0;
	ft_putnbr(nb);
}