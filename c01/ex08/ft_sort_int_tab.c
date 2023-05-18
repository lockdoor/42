#include <stdio.h>
void print_array_int(int *tab, int size)
{
    while (size-- > 0){
        printf ("%d, ", *tab);
        tab++ ;
    }    
}

void	ft_sort_int_tab(int *tab, int size)
{
    int *max;
    int *compare;
    int temp;
    int rest;

    while (size > 0)
    {
        max = tab;
        rest = --size;
        compare = ++tab;
        while (rest-- > 0)
        {
            if (*max < *compare)
            // if (*tab < *compare)
            {
                temp = *max;
                // temp = *tab;
                *max = *compare;
                // *tab = *compare;
                *compare = temp;
            }
            compare++;
        }
    }
}

int	main(void)
{
    int     size = 8;
	int     arr[] = {8, 5, 9, 3, 2, 7, 7, 10, 2, 8, 4};
	
    ft_sort_int_tab(&arr[0] , 11);
    print_array_int(arr, 11);
	return (0);
}
