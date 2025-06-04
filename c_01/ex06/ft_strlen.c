int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(*str++)
		len++;
	return (len);
}

#include <stdio.h>

int	main(void)
{
	int	l;
	char	str[] = "Pellkartoffel";

	l = ft_strlen(str);
	printf("length: %d", l);
}