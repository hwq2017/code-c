#include <stdio.h>

int main(void)
{
    int year, month, day;
    printf("Please input year month day:");
    scanf("%d,%d,%d", &year, &month, &day);
    int sum = 0;
    int leap = 0;
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        printf("leap year ...!\n");
        leap = 1;
    }
    else
    {
        printf("not leap year ...!\n");
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
    printf("%dyear %dday\n", year, sum);
    return 0;
}
