#include<unistd.h>
#include<stdio.h>

int ft_atoi(char *s)
{
    int  i = 0;
    int flag = 1;
    int res = 0;
    if (s[0]  == '-')
        return (0);
    while(s[i])
    {
        if (s[i] >= '0' && s[i] <= '9')
            res = (res * 10) + s[i] - '0';
        else
            return (0);
        i++;
    }
    return(res * flag);
}


void p_h(int nbr)
{
    
    char hex[] = "0123456789abcdef";

    if (nbr >= 16)
        p_h(nbr/16);
    nbr %= 16;
    write(1,&hex[nbr % 16],1);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        p_h(ft_atoi((argv[1])));
        write(1,"\n",1);
    return 0;
}

