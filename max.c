#include<stdio.h>
#include<unistd.h>
#include<limits.h>

int max(int *tab, unsigned int len)
{
    int i;

    int max = INT_MIN;
    if (len == 0)
        return (0);
    i = 0;
    while(i < len)
    {
        if (tab[i] >= max)
            max = tab[i];
        i++;
    }
    return (max);
}
 
/* int main(void)
{
    int a[] = {-399,-67 ,-4, -9 ,INT_MIN ,-65, 0};
    printf("max -%d\n", max(a, sizeof(a) / sizeof(int)));    
    return (0);
} */
