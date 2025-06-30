#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hex = "0123456789abcdef";
	int		n;
	int		m;

	while (*str)
		{
			n = (*str / 16);
			m = (*str % 16);
			if (*str < 32)
			{
				write(1, "\\", 1);
				write(1, &hex[n], 1);
				write(1, &hex[m], 1);
			}
			else
				write(1, str, 1);
			str++;
		}
}

int	main(void)
{
	char *str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}