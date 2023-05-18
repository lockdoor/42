#include <stdio.h>
#include <unistd.h>

char *ft_strupcase(char *str)
{
    char result[200];
    short index;
    while (*str)
    {
        result[index++] = *str;
        str++;
    }
    return *result;
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
    char str[] = "hello";
    // printable ();
    printf ("%s", *ft_strupcase(str));
    return (0);
}