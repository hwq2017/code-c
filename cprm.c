#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char  cmd[100];
    char a[10] = "cp ";
    char b[10] = " ";
    char c[10] = "rm ";
    if(argc == 4)
    {
        if(*argv[1] == 'c')
        {
            strcpy(cmd, a);
            strcat(cmd, argv[2]);
            strcat(cmd, b);
            strcat(cmd, argv[3]);
            printf("%s \n", cmd);
            system(cmd);
        }
        else if(*argv[1] == 'd')
        {
            strcpy(cmd, c);
            strcat(cmd, argv[2]);
            strcat(cmd, b);
            strcat(cmd, argv[3]);
            printf("%s \n", cmd);
            system(cmd);
        }
    }
    else
    {
        printf("Error!\n");
    }
    return 0;
}
