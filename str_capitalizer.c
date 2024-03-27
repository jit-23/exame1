#include<stdio.h>
#include<unistd.h>
#include<limits.h>

int ft_isalpha_capital(char c);
int ft_isalpha_lower(char c);
void all_lower(int strs, char **frases);
				 //argv[i][j - 1] == 32 || (argv[i][j - 1] >= 7 && argv[i][j - 1] <= 13)))
int main(int argc, char **argv)
{
    int i;
    int j;
	char c;

    i = 1;
    j = 0;
    if (argc > 1)
    {
       all_lower(argc, argv);
	   while(argv[i])
		{
			j = 0;
			
			while(argv[i][j] != '\0')
			{
				c = argv[i][j];
				if (j == 0 && ft_isalpha_lower(argv[i][j]))
				{
					c -= 32;
					write(1, &c , 1);
				}
				else if (ft_isalpha_lower(argv[i][j]) &&
					(argv[i][j - 1] == 32 || (argv[i][j - 1] >= 7 && argv[i][j - 1] <= 13)))
				{
					c -= 32;
					write(1, &c , 1);
				}
				else
					write(1,&argv[i][j],1);
				j++;
			}
			write(1,"\n",1);
			i++;
		}
		return (0);
    }

    write(1,"\n",1);
	return (0);
}

void all_lower(int strs, char **frases)
{
    int i = 1;
    int j = 0;
	char c;

    while(frases[i])
    {
        j = 0;
        while(frases[i][j])
        {
			c = frases[i][j];
			if (ft_isalpha_capital(c))
				frases[i][j] = c + 32;
			j++;
		}
		i++;
    }
}

int ft_isalpha_capital(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

int ft_isalpha_lower(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

