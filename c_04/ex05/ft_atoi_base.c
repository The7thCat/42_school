#include <stdio.h>

int	ft_atoi_base(char *str, char *base)
{
	int		a;
	long	r;
	int		i;
	int		j;
	int		base_len;
	int 	digit;
	long	power;
	char	*str_start;
	char	*b_ptr;
	char	*b_len;
	int		exp;

	a = 0;
	r = 0;
	i = 0;
	j = 0;
	base_len = 0;
	b_len = base;
	while (*b_len)
	{
		base_len++;
		b_len++;
	}
	while((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while(*str == '-' || *str == '+')
	{
		if(*str == '-')
			a++;
		str++;
	}
	str_start = str;
	while((*str >= '0' && *str <= '9') 
		|| (*str >= 'a' && *str <= 'z')
		|| (*str >= 'A' && *str <= 'Z'))
	{
		i++;
		str++;
	}
	str = str_start + i - 1;
	while (i > 0)
	{
		digit = (-1);
		b_ptr = base;
		while (*b_ptr != '\0')
		{
			if (*b_ptr == *str)
			{
				digit = b_ptr - base;
				printf("digit: %d\n", digit); //debug
				break;
			}
			b_ptr++;
		}
		if (digit == -1)
			return (0);
		power = 1;
		exp = j;
		while(exp > 0)
		{
			power *= base_len;
			exp--;
		}
		r += digit * power;
		printf("r: %ld\n", r); //debug
		str--;
		i--;
		j++;
	}
	if( a % 2 != 0)
		r = -r;
	return (r);
}

int	main(void)
{
	int	n;
	char	base[] = "0123456789"; //decimal
	// char	base[] = "01"; //binary
	// char	base[] = "0123456789ABCDEF"; //hex
	// char	base[] = "poneyvif"; //octal
	// char	base[] = "11"; //error
	char	str[] = "-55212";

	n = ft_atoi_base(str, base);
	printf("selected base: %s\n", base);
	printf("str: %s\n", str);
	printf("int conversion: %d\n", n);
}