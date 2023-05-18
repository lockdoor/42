void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
    *mod = a % b;
}

#include <stdio.h>
int	main(void)
{
	int     a;
	int     b;
    int     div;
    int     mod;

    a = 7;
    b = 5;	
    ft_div_mod(a, b, &div, &mod);
	printf("%d / %d = %d, %d %% %d = %d\n", a, b, div, a, b, mod);
	return (0);
}
