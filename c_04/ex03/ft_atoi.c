int	ft_atoi(char *str)
{
	int a;
	int	r;

    a = 0;
	r = 0;
    while((*str >= 9 && *str <= 13) || (*str == 32))
        ++str;
    while(*str == '-' || *str == '+')
	{
        if(*str == '-')
        a++;
    ++str;
	}
	
	while (*str >= '0' && *str <= '9')
	{
			r = (r * 10) + (*str - '0');
			++str;
	}
	if (a % 2 != 0)
			r = -r;
	return(r);
}



#include <stdio.h>
int	main(void)
{
	char	str[] = " ---+--+1234ab567";
	ft_atoi(str);
	printf("%d", ft_atoi(str));
}