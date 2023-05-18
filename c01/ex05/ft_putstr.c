#include <unistd.h>

void	ft_putstr(char *str)
{
    while (*str)
        write (1, str++, 1);    
}

#include <stdio.h>
int	main(void)
{
	char    str[] = "Hello lockdoor";
	
    ft_putstr (str);
	return (0);
}
