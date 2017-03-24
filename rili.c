#include <stdio.h>

int main(void)
{
    int year, month, day, i, n;
    printf("Please input year month day:");
    scanf("%d,%d,%d", &year, &month, &day);
    printf("one two three four five six seven\n");
    int sum = 0;
    int leap = 0;
    int s = 0;
    int c = 0;
    for(i = 0; i <= year; i++)
    {
    if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
    {
        printf("leap year ...!\n");
        leap = 1;
        s++;
        
    }
    else
    {
        c++;
    }
    if(month == 1)
    {
        sum = day;
    }
    else if(month == 2)
    {
        sum = 31 + day;
    }
    else if(month == 3)
    {
        sum = 31 + 28 + leap + day;
    }
    else if(month == 4)
    {
        sum = 31 + 28 + leap + 31 + day;
    }
    else if(month == 5)
    {
        sum = 31 + 28 + leap + 31 + 30 + day;
    }
    else if(month == 6)
    {
        sum = 31 + 28 + leap + 31 + 30 + 31 + day;
    }
    else if(month == 7)
    {
        sum = 31 + 28 + leap + 31 + 30 + 31 + 30 + day;
    }
    else if(month == 8)
    {
        sum = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + day;
    }
    else if(month == 9)
    {
        sum = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + 31 + day;
    }
    else if(month == 10)
    {
        sum = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
    }
    else if(month == 11)
    {
        sum = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
    }
    else if(month == 12)
    {
        sum = 31 + 28 + leap + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day; 
    }
    n = 366 * s + 365 * c + sum;
    if(n % 7 ==)
    printf("%dyear %dday\n", year, sum);
    return 0;
}
