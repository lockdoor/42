#include <stdio.h>
void print_array_int(int *tab, int size)
{
    while (size-- > 0){
        printf ("%d\n", *tab);
        tab++ ;
    }    
}
void	ft_rev_int_tab(int *tab, int size)
{
    int     reverse[size];
    int     i = size - 1;
    while (i >= 0)
    {
        reverse[i--] = *tab;
        tab++;
    }
    tab -= size;
    i = 0;
    while (i < size)
    {
        *tab = reverse[i++];
        tab++ ;
    }
}

int	main(void)
{
    int     size = 8;
	int     arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

	print_array_int(arr, size);
    ft_rev_int_tab(&arr[0], size);
    print_array_int(arr, size);
	return (0);
}
