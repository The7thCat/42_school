int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if(!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int		r;
	// char 	str[] = "hellOworld";
	char	str[] = "HELLOWORLD";
	// char	str[] = "";
	
	r = ft_str_is_uppercase(str);
	printf("Code: %d", r);
}