#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    while (*str)
    {
        // if ((*str > 'z') || (*str < 'a' && *str > 'Z') || (*str < 'A'))
        //     return (0);
        if (*str > 'z')
            return (0);
        else if (*str < 'a' && *str > 'Z')
            return (0);
        else if (*str < 'A')
            return (0);
        str++ ;
    }
    return (1);
}

int main(void)
{
    char str[] = "";
    printf ("%d", ft_str_is_alpha(str));
    return (0);
}