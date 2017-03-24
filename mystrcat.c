#include <stdio.h>
#include <string.h>

void mystrcat(char *dest, char *src, char *tag);

int main(void)
{
   char a[10] = "li";
   char b[10] = "linux";
   char c[100];
   mystrcat(c, "unix", "h1");
   printf("c = %s\n", c);
   mystrcat(c, "linux and window", "h2");
   printf("c = %s\n", c);



    return 0;
}

void mystrcat(char *dest, char *src, char *tag)
{
    char t1[10] = {'<'};
    char t2[10] = {'>'};
    char t3[10] = {'/'};

    *dest = 0;

    strcat(dest, t1);
    strcat(dest, tag);
    strcat(dest, t2);
    strcat(dest, src);
    strcat(dest, t1);
    strcat(dest, t3);
    strcat(dest, tag);
    strcat(dest, t2);
    /*
    strcat(t1, p);
    strcat(t1, t3);
    strcat(t1, tag);
    strcat(t1, t2);
    printf("%s", strcat(t1,t2));
    */
    
}

