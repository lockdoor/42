void	ft_ultimate_div_mod(int *a, int *b)
{
	int     div;
    int     mod;
    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

#include <stdio.h>
int	main(void)
{
	int     a;
	int     b;

    a = 7;
    b = 5;	
    ft_ultimate_div_mod(&a, &b);
	printf("%d %d \n", a, b);
	return (0);
}
