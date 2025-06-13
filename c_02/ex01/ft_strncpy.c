char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*start = dest;
	
	while (n > 0 && *src)
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (start);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			src[] = "Testosteron_15";
	char			dest[15] = "";
	unsigned int	n = 9;
	char			src2[] = "Testosteron_15";
	char			dest2[15] = "";
	unsigned int	n2 = 9;

	printf("Original: %s\n", strncpy(dest2, src2, n2));
	printf("ft_strncpy: %s\n", ft_strncpy(dest, src, n));
	return(0);
}
