int ft_sqrt(int nb)
{
    int n;

    n = 0;
    if (nb < 0)
        return (-1);
    while (!((n * n) == nb))
    {
        n++;
        if ((n * n) > nb) // для случаев, когда не явл точным квадратом
            return (-1);    
    }
    return (n);
}

#include <stdio.h>
int main(void)
{
    int nb = 0;
    printf("The square of %d is %d\n", nb, ft_sqrt(nb));
    return (0);
}