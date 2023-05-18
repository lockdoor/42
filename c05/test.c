#include <stdio.h>
#include <limits.h>
#include <math.h>
#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"

// cc -Wall -Werror -Wextra test.c && ./a.out

int main(void)
{
    // int size = 12;
    // int nb = 47; //overflow fibonacci
    int nb = 48;
    int i = 0;
    while (i < nb)
        printf ("%d\n", ft_fibonacci (i++));
    // int power = 1;

    // printf ("\n\n");
    // printf ("*********** ft_iterative_factorial ************\n");
    // printf ("%d\n", ft_iterative_factorial (size));
    // printf ("*********** ft_recursive_factorial ************\n");
    // printf ("%d\n", ft_recursive_factorial (size));

    // printf ("\n\n");
    // printf ("*********** pow ************\n");
    // printf ("%d\n", (int) pow (nb, power));
    // printf ("*********** ft_iterative_power ************\n");
    // printf ("%d\n", ft_iterative_power (nb, power));
    // printf ("*********** ft_recursive_power ************\n");
    // printf ("%d\n", ft_recursive_power (nb, power));

    // printf ("\n\n");
    // printf ("*********** ft_fibonacci.c ************\n");
    // printf ("%d\n", ft_fibonacci (nb));
    return (0);
}