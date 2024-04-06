#include <stdio.h>
#include <string.h>

/*
结构体
定义有四种方式：
1.先定义结构体类型
2.定义结构体类型时定义变量
3.定义结构体类型时定义变量(省略结构体标签)
4.使用typedef关键字

*/

//方式1
struct student
{
    int ID;
    char name[10];
    int scores[2];
    int age;
};

//方式2
struct student1
{
    int ID;
    char name[10];
    int age;
}stu;

//方式3
struct
{
    int ID;
    char name[10];
    int age;
}stu1;

//方式4
typedef struct student2
{
    int ID;
    char c;
    int age;
    double w;
}STUDENT;

int main()
{
    //方式1
    //初始化结构体
    struct student s={10086,"saber",{100,100},18};
    stu.ID = 1000;
    stu1.age = 20;
    STUDENT s1; //等价于struct student2 s

    //赋值，已定义或初始化的结构体不能再用{}进行赋值。
    struct student ss;
    //s = {100, "sakura", {1, 2}, 20};
    //ss={100, "sakura", {1, 2}, 20};
    ss = s;
    printf("%d\n", ss.ID);

    //方式2 可以直接用stu，也可以另外自己创
    stu.ID = 10;
    struct student1 stu_new;
}