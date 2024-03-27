#include<stdlib.h>
#include <stdio.h>
#include <unistd.h>


int digit_size( int nbr)
{
    int i = 0;
    while(nbr != 0)
    {
        nbr /= 10;
        i++;
    }
    return (i);
}

char *ft_itoa(int nbr)
{
    int len;
    char *str;
    len = digit_size(nbr);
    str = (char *)malloc(sizeof(char ) * len + 1);
    str[len--] = '\0';
    if (nbr == 0)
        str[0] = 48;
    if (nbr < 0)
    {
        str[0] = '-';
        nbr  = -nbr; 
    }
    while(nbr > 0)
    {
        str[len--] = (nbr % 10) + '0';   
        nbr /= 10;
    }
    return (str);
}

int main(int a, char **b)
{
    char *c = ft_itoa(--a);

    printf("%s\n", c);
   // write(1,&c,sizeof(c)/sizeof(char));
    return (0);
}
