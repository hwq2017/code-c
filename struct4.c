#include <stdio.h>

int main(int argc, const char *argv[])
{
    /*typedef struct {
        char *name;
        int age;
        float score;
    }a ;
     a stu = {"tony", 18, 78};
     a *p;
     p = &stu;
    // p->name;
    printf("%s \n", p->name);
    printf("%s %d %f\n", stu.name, stu.age, stu.score);*/
    typedef struct {
        char *namelf;
        int age;
        float score;
    }*p, a;
    p q;
    a stu1={"li", 13, 34};
    q = &stu1;
    printf("%s\n ", (*q).name);
    return 0;
}
