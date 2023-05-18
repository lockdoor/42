#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A');
        i++ ;
    }
    i = 0;
	while (str[i])
	{
		if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z')
			&& !(str[i - 1] >= '0' && str[i - 1] <= '9')
			&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - ('a' - 'A');
		i++ ;
	}
	return (str);
}

int	main(void)
{
	char	str[100] = "salut, comment tu vas ? 42Mots quarante-deux; cinquante+et+un";
	printf ("\n%s", ft_strcapitalize (str));
	return (0);
}
