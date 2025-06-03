#include <unistd.h>

int	main(int argc, char **argv)
{
	char	**i;
	char	**j;
	char	*temp;
	(void)argc;

	i = argv + 1;
	while(*i)
	{
		j = i + 1;
		while(*j)
		{
			char	*str1 = *i;
			char	*str2 = *j;
			int	result = 0;
			while (*str1 && *str2)
			{
				if(*str1 < *str2)
				{
					result = -1;
					break;
				}
				if (*str1 > *str2)
					{
						result = 1;
						break;
					}
					str1++;
					str2++;
			}
			if (result == 0 && (*str1 == '\0' && *str2 != '\0'))
				result = -1;
			if (result == 0 && (*str1 != '\0' && *str2 == '\0'))
				result = 1;
			if (result > 0)
			{
				temp = *i;
				*i = *j;
				*j = temp;
			}
			j++;
		}
		i++;
	}

	i = argv + 1;
	while (*i)
		{
			char *arg = *i;
			while(*arg)
			{
				write(1, arg, 1);
				arg++;
			}
			write(1, "\n", 1);
			i++;
		}
		return (0);
}