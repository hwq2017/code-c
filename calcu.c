#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
   long int i, j,k;
   char *data = NULL;
   char ch;
   int value,len = 0;
   //char getstr[100];
   data = getenv("QUERY_STRING");
   //len = atoi(getenv("CONTENT_LENGTH"));
   if(data == NULL)
   {
    printf("error!!!\n");
   }
   printf("Content type: text/html\n\n");
   printf("<html lang=\"en\">\n");
   printf("<meta charset=\"UTF-8\">\n");
   printf("<head><title> 计算器 </title>\n");
   printf("<style type=\"text/css\">");
   printf("</style></head>\n");
   printf("<body>\n");
   printf("%s\n", data);
  sscanf(data, "a1=%ld&k=%ld&b1=%ld", &i,&k, &j);

   printf("<Hr />\n");
   switch(k)
   {
   case 1:
   printf("%ld + %ld = %ld\n", i,j, i + j);
   break;
   case 2:
   printf("%ld - %ld = %ld\n", i, j, i - j);
   break;
   case 3:
   printf("%ld * %ld = %ld\n", i, j, i * j);
   break;
   case 4:
   printf("%ld / %ld = %ld\n", i, j, i / j);
   break;
   case 5:
   printf("%ld %% %ld = %ld\n", i, j, i % j);
   break;
   case 6:
   sscanf(data,"a1=%ld", &i);
   printf("%f\n", sqrt(i));
   break;

   //default:
   //break;
 }
  printf("</body>\n");
  printf("</html>\n");
  fflush(stdout);







}
