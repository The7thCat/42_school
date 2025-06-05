int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if(!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int		r;
	// char 	str[] = "he$llOworld !";
	// char	str[] = "HELLO world11";
	char	str[] = "H\nELLO wor\0ld11";
	// char	str[] = "";
	
	r = ft_str_is_printable(str);
	printf("Code: %d", r);
}