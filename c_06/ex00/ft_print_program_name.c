#include <unistd.h>
//arr declaration, u can also use the pointer declaration **argv
int	main(int  argc, char *argv[]) 
{
	int	len;
	(void)argc; //needing 2 inputs but using 1: solution(void)
	char *name = argv[0];
	char *ptr = name;

	while(*ptr != '\0')
		ptr++;
	len = ptr - name;
	write(1, name, len);
	write(1, "\n", 1);
}

