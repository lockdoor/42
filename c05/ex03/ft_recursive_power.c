int ft_recursive_power(int nb, int power)
{
    long i;
    i = 1;
    if (power < 0)
        return (0);
    if (power > 0)
    {
        i = ft_recursive_power(nb, power - 1);
        if (i == 0 || i * nb > 2147483647)
            return (0);
        return (i * nb);
    }
    return (i);
}