#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str++, 1);
	}
}

int	main(void)
{
	char	txt[] = "Hello";
	ft_putstr(txt);
	return (0);
}