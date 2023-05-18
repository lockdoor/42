#include <stdio.h>
#include <unistd.h>

int ft_str_is_printable(char *str)
{
    while (*str)
    {
        if (!(*str >= 32 && *str <= 127))
            return (0);
        str++ ;
    }
    return (1);
}

// void printable(void)
// {
//     int c = 32;
//     while (c++ <= 127)
//     {
//         write (1, &c, 1);
//     }
// }

int main(void)
{
    char str[] = "";
    // printable ();
    printf ("%d", ft_str_is_printable(str));
    return (0);
}