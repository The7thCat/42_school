char	*ft_strcapitalize(char *str)
{
	int	i;
	
	i = 1;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
		str[0] -= 32;
	while(str[i])
	{
		if ((str[i - 1] < 47) && ((str[i] >= 'a') && (str[i] <= 'z')))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Str: %s\n", str);
	printf("Capitalize: %s\n", ft_strcapitalize(str));
	return (0);
}