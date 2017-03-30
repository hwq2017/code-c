#include <stdio.h>

struct S{
    char *name;
    int age;
    float score;
};
struct S print(char *name, int age, float score);

int main(int argc, const char *argv[])
{
   struct S stu;
   stu = print("sam", 11, 78);
   printf("%s  %d  %f\n", stu.name, stu.age, stu.score);
    return 0;
}
struct S print(char *name, int age, float score)
{
    struct S a;
    a.name = name;
    a. age = age;
    return a;
}

typedef int INT

typedef struct s{
    int b;    
}a,*q;

struct s *  =====>q
q p

int *p = &a

*p

struct s * p

struct s  abc;

p = &abc;

(*p).b  ===> p->b
