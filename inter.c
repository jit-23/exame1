
#include <stdio.h>
#include <unistd.h>

char ft_strchr(char *s, int c,int len)
{
    int i = 0;
    while(i < len)
    {
        if (s[i] == c)
            return (0);
        i++;
    }
    return (1);
}

void inter(char *what, char *where)
{
    int i = 0;
    int j = 0;
    while(what[i])
    {
            if(ft_strchr(what,what[i], i) == 1)
            {
                j = 0;
                while(where[j])
                {
                    if (what[i] == where[j])
                    {
                        write(1,&what[i],1);
                        break ;
                    }
                    j++;
                }
            }
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 3)
        inter(argv[1], argv[2]);
    write(1,"\n",1);
    return 0;
}

