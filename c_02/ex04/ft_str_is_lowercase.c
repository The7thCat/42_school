int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if(!(*str >= 'a' && *str <= 'z'))
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
	// char	str[] = "helloworld";
	char	str[] = "";
	
	r = ft_str_is_lowercase(str);
	printf("Code: %d", r);
}