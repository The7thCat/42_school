#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{	
	char	*start = dest;

	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (start);
}

int	main(void)
{
	char	src[] = "Testosteron_15";
	char	dest[15] = ""; // ideal: len src + 1 as buffer
	char	src_2[] = "Testosteron_15";
	char	dest_2[15] = "";

	printf("Source: %s\n", src);
	strcpy(dest_2, src_2);
	printf("strcpy: %s\n", strcpy(dest_2, src_2));
	ft_strcpy(dest, src);
	printf("ft_strcpy: %s\n", ft_strcpy(dest, src));
	return (0);
}
