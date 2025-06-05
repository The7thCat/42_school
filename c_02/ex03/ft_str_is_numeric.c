int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if(!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int		r;
	// char 	str[] = "45334978";
	char	str[] = "helloworld";
	// char	str[] = "";
	
	r = ft_str_is_numeric(str);
	printf("Code: %d", r);
}