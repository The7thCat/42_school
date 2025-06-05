char	*ft_strupcase(char *str)
{
	char	*ptr = str;

	while(*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (ptr);
}

#include <stdio.h>

int	main(void)
{
	char	*r;
	char 	str[] = "hellOworld !";
	// char	str[] = "HELLO world11";
	// char	str[] = "HELL$O world11";
	// char	str[] = "";
	
	r = ft_strupcase(str);
	printf("String: %s", r);
}