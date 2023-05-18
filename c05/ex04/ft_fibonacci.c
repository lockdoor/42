int ft_fibonacci(int index)
{
    long i;
    
    // i = 0;
    if (index <= 1)
    {
        if(index < 0)
            return -1;
        return index;
    }
    i = ft_fibonacci(index - 1) + ft_fibonacci(index -2);
    // if (i > 2147483647)
    //     i = 0;
    return (i);
}

// int addSafe(int a, int b, int* result) {
//     if ((b > 0 && a > 2147483647 - b) || (b < 0 && a < -2147483647- b)) {
//         return 0;  // Overflow occurred
//     }

//     *result = a + b;
//     return 1;
// }

// int ft_fibonacci(int n) {
//     if (n <= 1) {
//         return n;
//     }

//     int fib1, fib2;
//     if (!addSafe(ft_fibonacci(n - 1), ft_fibonacci(n - 2), &fib1) ||
//         !addSafe(ft_fibonacci(n - 2), ft_fibonacci(n - 3), &fib2)) {
//         // Handle overflow
//         // printf("Overflow occurred at term %d\n", n);
//         return 0;  // Return a default value or handle the error accordingly
//     }

//     return fib1 + fib2;
// }

