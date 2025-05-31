#include <unistd.h>

void    ft_putnbr_no_arr(int nb)
{
    char    digit;

    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nb < 0)
        {
            write(1, "-", 1);
            nb = -nb;
        }
    if (nb > 10)
        ft_putnbr_no_arr(nb / 10);
    digit = '0' + (nb % 10);
    write(1, &digit, 1);
}

int main(void)
{
    ft_putnbr_no_arr(-2147483648);
    write(1, "\n", 1);
//max number 2147483647
// min number -2147483648
}