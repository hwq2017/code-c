结构体的变量的三种声明及初始化的方式：
1,2是对结构类型进行命名的方式进行声明变量

1.
struct A{     //声名一个结构类型的结构体名字A，然后进行变量的声明，struct不能省略。
    int a;
    char b;
    float c;
    int abc[10];
};

struct A     a = {...},b = {....}; 


2.
struct A{      //在定义结构体名字的时候同时声明变量并对其进行初始化
    int a;
    char b;
    float c;
    int abc[10];
}a = {1,'c',2.2,{}},b = {....};

struct A    b;//先声明结构体变量b,之后对其初始化如下：

b.a = 
b.b = 
b.c = 
b.abc = 
//可以通过b.a= 这种方式获得结构体成员的值

3.
struct{
    int a;
    char b;
    float c;
    int abc[10];
}a = {.....};



