#include <stdio.h>
#include <string.h>
void mystrcpy(char *dest, char *src1, char *src2);

int main(void)
{
    char name[] = "zhao";
    char age[] = "20" ;
    char sum[100];
    char *sum1;

   sum1 =  mystrcpy(sum, name, age);
   printf("sum = %s\n", sum);
   printf("sum1 = %s\n", sum1);
    return 0;
}



void mystrcpy(char *dest, char *src1, char *src2)
{
    strcpy(dest, src1);
    strcat(dest, src2);
    printf("%s \n", dest);
}
