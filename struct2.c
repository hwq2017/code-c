#include <stdio.h>

int main(int argc, const char *argv[])
{
    struct S{
        char name[20];
        int age;
        float score;
    };
    struct S stu[5]={
        {"tom", 12, 90},
        {"san", 13, 89},
        {"lili", 12, 99},
        {"vivi", 13, 78},
        {"ti", 12, 90},
    };
    int i;
    for(i = 0; i < 5; i++)
    {
    printf("%-5s%-5d%-5f\n", stu[i].name, stu[i].age, stu[i].score);
    }
    
    return 0;
}
