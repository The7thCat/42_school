#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (*c++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	if (!(dest = (char*)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return NULL;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(int ac, char **av)
{
	char	*TestString;
	char	*BestString;

	if (ac == 2)
	{
		TestString = ft_strdup(av[1]);
		BestString = strdup(av[1]);
		printf(":%s:\n:%s:\n", TestString, BestString);
		free(TestString);
		free(BestString);
	}
	return (0);
}