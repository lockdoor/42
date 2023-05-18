#include <unistd.h>

int	ft_strlen(char *str)
{
    int count;
    
    while (*str)
    {
        str++ ;
        count++ ;
    }
    return count; 
}

#include <stdio.h>
int	main(void)
{
	char    str[] = "Hello lockdoor";
	
    printf ("%d", ft_strlen(str));
	return (0);
}
