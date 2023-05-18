#include <stdio.h>
#include <unistd.h>
#include <string.h>

unsigned int ft_strlen(char *dest)
{
    unsigned int    i;

    i = 0;
    while (dest[i])
        i++;
    return i;
}

int check_null(char *str, int size)
{
    int i;

    i = 0;
    while (size--)
    {
        if (str[size] == '\0')
        {
            i++;
        }
    }
    return i;
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    // unsigned int    i;
    unsigned int    n;
    char    *s;

    // i = 0;
    n = size;
    s = src;
    while (((*dest++ = *s++) != '\0' ) && --n)
        ;
    if (n == 0)
        *(--dest) = '\0'; 
    while (n--)
        *dest++ = '\0';


    /* this is work */
    // while (((dest[i] = src[i]) != '\0') && --s)
    //     i++ ;
    // if (s == 0){
    //     dest[i] = '\0';
    // }
    // while (i <= s)
    //     dest[i++] = '\0';
    return (ft_strlen(src));
}



// char *ft_srtncpy(char *dest, char *src, unsignin)

int main() {
    int size = 60;
    char dest1[size];
    char dest2[size];
    char dest3[size];
    char src[] = "hello";
    unsigned int len1 = strlcpy (dest2, src, size);
    unsigned int len2 = ft_strlcpy (dest3, src, size);
    
    strncpy (dest1, src, size);
    
    
    printf ("%s\n", dest1);
    printf ("%d\n", check_null(dest1, size));

    printf ("********** strlcpy ************\n");
    printf ("%s\n", dest2);
    printf ("null size => %d\n", check_null(dest2, size));
    printf ("len size => %d\n", len1);
    printf ("\n");
    
    printf ("********** ft_strlcpy ************\n");
    printf ("%s\n", dest3);
    printf ("null size => %d\n", check_null(dest3, size));
    printf ("len size => %d\n", len2);
    printf ("\n");
    return 0;
}