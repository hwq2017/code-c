#include <stdio.h>

int main(void)
{
    int a[10] = {3,5,1,12,23,65,10,9,32,56};
    int i, j, temp = 0;
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 9 - i ; j++)
        {
              if(a[j] > a[j+1])
              {
                  temp = a[j];
                  a[j] = a[j+1];
                  a[j+1] = temp;
               }
        }
        printf("%d ", a[j]);
    }
    printf("\n");
    return 0;
}
