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

/*
return size + src_strlen
if size <= dest_strlen ไม่มีการต่อ string
if size > dest_strlen มีการต่อ string 
    และต้องมีการ terminate เมื่อสิ้นสุด
*/

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    s;
    unsigned int    dest_len;
    s = ft_strlen(src) + size;
    while (dest_len < size)
    {
        dest[dest_len] = *src++;
        dest_len ++;
    }
    return (s);
}

int main(void)
{
    char dest1[30] = "Welcome to "; // strlen == 11
    char dest2[30] = "Welcome to "; // strlen == 11
    const char src[] = "Bangkok1"; // strlen == 8
    unsigned int size = 25;

    printf ("********** strlcat **********\n");
    size_t s1 = strlcat(dest1, src, size);
    printf ("%s\n", dest1);
    printf ("%zu\n", s1);

    printf ("********** ft_strlcat **********\n");
    size_t s2 = ft_strlcat(dest2, src, size);
    // printf ("%s\n", dest2);
    printf ("%zu\n", s2);

    return (0);
}