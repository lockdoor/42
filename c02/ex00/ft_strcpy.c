#include <stdio.h>
// #include <unistd.h>
// #include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
    short i;

    i = 0;
    while (*src)
    {
        *(dest + i++) = *src++;
    }
    *(dest + i) = '\0';
    printf ("%lu\n", sizeof(dest));
    printf ("%s", dest);
    return dest;
}

int main(void)
{
    char a[] = "123456789";
    // char b[sizeof(a)];
    char b[20];
    // strcpy (b, a);
    ft_strcpy(b, a);
    // printf ("%lu\n", sizeof(a));
    // printf ("%s", b);
    // while (*b){
    //     write (1, b++, 20);
    // }
    return (0);
}