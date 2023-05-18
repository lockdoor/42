#include <stdio.h>
#include <string.h>

unsigned int ft_strlen(char *dest)
{
    unsigned int    i;

    i = 0;
    while (dest[i])
        i++;
    return i;
}

char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int len;

    len = ft_strlen(to_find);
    while (*str)
    {
        if(*str == *to_find){
            i = 1;
            while (str[i] && to_find[i])
            {
                if (str[i] != to_find[i])
                    break;
                i ++ ;
            }
            if (i == len)
                return (str);   
        }
        str++ ;
    }
    return NULL;
}


int main(void)
{
    char str[] = "Welcome to Bangkok";
    char to_find[] = "Bangkok1";

    printf ("%s\n", strstr(str, to_find));
    printf ("%s\n", ft_strstr(str, to_find));
    return (0);
}