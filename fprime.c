#include <stdio.h>
#include<unistd.h>
#include<stdlib.h>

/* int main(int argc,char **argv)
{
    int nbr;
    int i = 2;
    nbr = 0;
    if (argc == 2)
    {
        nbr = atoi(argv[1]);
        while(i < nbr/2)
        {
            if (nbr % i)
            break ;
        }
    }
    write(1,"\n",1);
    return (0);
} */

int main(int argc,char **argv)
{
    int nbr;
    int i = 2;
    nbr = 0;
    if (argc == 2)
    {
        nbr = atoi(argv[1]);
        if (nbr == 1)
        {
		    printf("1");
            return (0);
        }
        while(nbr > 1)
        {
            if (nbr % i == 0)
            {
                printf("%d", i);
                nbr /= i;
                if (nbr > 1)
                    printf("*");
                i--;
            }
            i++;
        }
    }
    printf("\n");
    return (0);
}
