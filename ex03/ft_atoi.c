#include <unistd.h>
#include <stdio.h>

int ft_plmi(char *str)
{
    int     i;
    int     minus;
    char    c;

    i = 0;
    minus = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '-')
            minus++;
        i++;
    }
    if ((minus % 2) == 0)
        return (1);
    return (-1);
}

int ft_atoi(char *str)
{
    int     i;
    int     res;
    int     sign;
    char    c;

    i = 0;
    sign = ft_plmi(str);
    while (str[i] == ' ' || str[i] >= '\t' && str[i] <= '\r')
        i++;
    while (str[i] == '+' || str[i] == '-')
        i++;
    res = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

int main(int argc, char *argv[])
{
    //ft_atoi("\t   ---++-++++1234");
    if (argc == 2)
    {
        printf("Original number: %s\n", argv[1]);
        printf("Final number: %d\n", ft_atoi(argv[1]));
    }
    else
        printf("Error!\n");
    return (0);    
}