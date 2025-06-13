unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	
	len = 0;
	while (src[len] != '\0')
			len++;
	if (size == 0)
		return (len);
	while (size-- > 1 && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (len);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			dest[13] = "";
	char			src[] = "Example_Text";
	unsigned int	size = 10;
	unsigned int	a;

	printf("src: %s\n", src);
	a = ft_strlcpy(dest, src, size);
	// a = strlcpy(dest, src, size);
	printf("dest: %s\n", dest);
	printf("len: %d\n", a);
	return(0);
}
