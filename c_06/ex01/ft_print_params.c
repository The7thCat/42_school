#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;

	while(*++argv)
	{
		char *arg = *argv;
		while(*arg)
			write(1, arg++, 1);
		write(1, "\n", 1);
	}	
	return (0);
}