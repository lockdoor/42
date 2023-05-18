int ft_iterative_factorial(int nb)
{
    int i;

    i = 1;
    if (nb < 0)
        return (0);
    while (nb)
    {
        i *= nb--;
        // if nb > 12 overflow
        if (i > 0 && i * nb > 2147483647 - i)
            return (0);
    }        
    return (i);
}
