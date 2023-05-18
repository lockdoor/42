void	ft_swap(int *a, int *b)
{
	int     temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

#include <stdio.h>
int	main(void)
{
	int     a;
	int     b;

    a = 5;
    b = 10;	
	printf("a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return (0);
}
