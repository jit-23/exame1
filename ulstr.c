#include <stdio.h>
#include <unistd.h>

int is_letter(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    if (c >= 'a' && c <= 'z')
        return (2);
    else (0);
}

void    ulstr(char *s)
{
    char c;
    int i= -1;
    while(s[++i])
    {
        c = s[i];
        if (is_letter(s[i]) == 1)
        {
            c+=32;
            write(1,&c,1);
        }
        else if (is_letter(s[i]) == 2)
        {
            c-=32;
            write(1,&c,1);
        }
        else
            write(1,&s[i],1);
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        ulstr(argv[1]);
    write(1,"\n",1);
    return 0;
}

