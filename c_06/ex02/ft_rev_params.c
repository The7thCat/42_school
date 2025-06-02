#include <unistd.h>

int	main(int argc, char **argv)
{
	while(--argc > 0)
	{
		char *arg = argv[argc];
		while(*arg)
			write(1, arg++, 1);
		write(1, "\n", 1);
	}	
	return (0);
}