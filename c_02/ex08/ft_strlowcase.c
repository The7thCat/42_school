char	*ft_lowercase(char *str)
{
	char	*ptr = str;

	while(*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (ptr);
}

#include <stdio.h>

int	main(void)
{
	char	*r;
	// char 	str[] = "hellOworld !";
	char	str[] = "HELLO world11";
	// char	str[] = "HELL$O world11";
	// char	str[] = "";
	
	r = ft_lowercase(str);
	printf("String: %s", r);
}