#include <stdio.h>

int main(void)
{
    FILE *stream;
    char msg[100];
    stream = fopen("a.c","r+");
    
    fgets(msg, 8, stream);
    printf("%s\n",msg);
    return 0;
}
