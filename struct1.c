#include <stdio.h>

struct S{
    char *name;
    int age;
};
void print(struct S a);
 int main(int argc, const char *argv[])
 {
    struct S stu={"ton", 14};
   print(stu);
   
     return 0;
 }
void print(struct S a)
{
    printf("%s\n", a.name);
    printf("%d\n", a.age);
}
