#include<stdio.h>
#include <stdlib.h>

char    **ft_split(char *str)
{
    int i = 0;
    int b = 0;
    int a = 0;
    char **split;

    if (!(split = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i+=1;
    while(str[i])
    {
        b = 0;
        if (!(split[a] = (char *)malloc(sizeof(char) * 4096)))
            return (NULL);
        while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
            split[a][b++] = str[i++];
        while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i+=1;
        split[a][b] = '\0';
        a++;
    }
    split[a] = NULL;
    return (split);
}

