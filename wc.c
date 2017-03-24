#include <stdio.h>

int main(void)
{
    int n = 0, s = 0;
    char ch;
    ch = getchar();
    while(ch != EOF)
    {
       s++;
       ch = getchar();
       if(ch == '\n')
       {
          n++;
       }
    }
    printf("%d, %d\n", s, n);

    return 0;
}
