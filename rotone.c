#include <stdio.h>
#include <unistd.h>

3

int main(int argc, char **argv)
{
    int i;

    i = 0;
    char c;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            c = argv[1][i];
            if (argv[1][i] == 'Z')
                write(1,"A",1);
            else if ((argv[1][i] == 'z'))
                write(1,"a",1);
            else if (ft_isalpha(argv[1][i]))
            {
                c++;
                write(1, &c, 1);
            }
            else
                write(1, &argv[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
    return (0);
}
