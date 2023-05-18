#include <stdio.h>
#include <string.h>

void    ft_strncpy(char *dest, char *src, unsigned int n)
{
    while (n-- > 1)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main(void)
{
    char a[] = "hello lockdoor";
    // char b[sizeof(a)];
    char b[6];
    // strncpy (b, a, sizeof(b));
    ft_strncpy(b, a, sizeof(b));
    // printf ("%lu\n", sizeof(a));
    printf ("%s", b);
    return (0);
}