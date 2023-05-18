#include <stdio.h>
#include <math.h>

int ft_iterative_power(int nb, int power)
{
    long i;

    i = nb;
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    while (--power > 0)
    {
        i = i * nb;
        if (i == 0 || i > 2147483647)
            return (0);
    }    
    return (i);
}
