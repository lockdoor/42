#include <stdio.h>

int ft_atoi(char *str)
{
    int n;
    int pos;

    n = 0;
    pos = 1;
    while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
    while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			pos *= -1;
		str++;
	}
    while (*str >= '0' && *str <= '9')
    {
       n =  (n * 10) + (*str - 48);
       str++ ;
    }
    return (n * pos);
}

int main(void)
{
    char str[] = "      -+-+-+-+-+154";
    printf ("%d\n", ft_atoi (str));
    return (0);
}