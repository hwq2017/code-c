#include <stdio.h>

int main(void)
{
    char str1[10] = "abcde";
    char str2[10] = "bacdf";
    int i, j, k;
    for(i = 0; str1[i] != '\0';)
    {
        i++;
    }
    for(j = 0; str2[j] != '\0';)
    {
        j++;
    }
    if(i < j)
    {
        printf("str1 < str2\n");
    }
    else if(i > j)
    {
        printf("str1 > str2\n");
    }
    else
    {
        for(k = 0; k <= i;)
        {
            if('str1[k]' > 'str2[k]')
            {
                printf("str1 > str2 \n");
            }
           else if('str1[k]' < 'str2[k]')
            {
                printf("str1 < str2 \n");
            }
           else('str1[k]' == 'str2[k]')
            {
                k++; 
            }
        }
        printf("str1 = str2 \n");
    }
    return 0;
}
