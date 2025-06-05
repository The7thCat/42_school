int	ft_str_is_alpha(char *str)
{
	char	*ptr = str;

	if(*ptr == '\0')
		return(1);
	while (*ptr)
	{
		if (!(*ptr >= 'A' && *ptr <= 'Z') 
		&& !(*ptr >= 'a' && *ptr <= 'z'))
			return (0);
		ptr++;
	}
			return(1);
}

#include <stdio.h>

int	main(void)
{
	int	r;
	// char str[] = "Onlyalphas";
	// char str[] = "Just1number";
	// char str[] = "$0.99";
	char str[] = "";
	r = ft_str_is_alpha(str);
	printf("Code = %d\n1 = alpha or '\\0'\n0 = non alpha char\n", r);
	return (0);
}