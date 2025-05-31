#include <unistd.h>

int	ft_base_check(char *base)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	j = 0;
	len = 0;
	while(base[len])
		len++;
	if(len <= 1)
		return (0);
	while(i < len)
	{
		if(base[i] == '+' || base[i] == '-' || base[i] <= 32 
			|| base[i] >= 126)
			return (0);
		j = i + 1;
		while (j < len)
			{
				if(base[i] == base[j])
					return (0);
				j++;
			}
			i++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		n;
	char	digit;
	long	lnbr;

	lnbr = nbr;
	n = 0;
	n = ft_base_check(base);
	if (n == 0)
		return;
    if (lnbr < 0)
        {
            write(1, "-", 1);
            lnbr = -lnbr;
        }
    if (lnbr >= n)
        ft_putnbr_base(lnbr / n, base);
    digit = base[lnbr % n];
    write(1, &digit, 1);
}

int	main(void)
{
	// char	base[] = "0123456789"; //decimal
	char	base[] = "01"; //binary
	// char	base[] = "0123456789ABCDEF"; //hex
	// char	base[] = "poneyvif"; //octal
	// char	base[] = "11"; //error
	int		nbr = -99;

	ft_putnbr_base(nbr, base);
	write(1, "\n", 1);
}

