#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

int main(void)
{
    int j;

    char    str[] = "Tere";
    j = ft_strlen(str);
    j += '0';
    write(1, &j, 1);
}