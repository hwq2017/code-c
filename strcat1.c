#include <stdio.h>

void mystrcat(char *p, char *q)
{
    char str1[15];
    char str2[15];
    int i, j;
    for(i = 0; str1[i] != '\0';)
    {
             i++;
    }
        if(str1[i] == '\0')
        {
            for(j = 0; str2[j] != '\0'; j++)
            {
                str1[i] =str2[j];
                i++;
            }
        }
    printf("%s\n", str1);
}
int main(void)
{
    char a[5] = "li";
    char b[8] = "linux";
    mystrcat(a, b);
    return 0;
}
