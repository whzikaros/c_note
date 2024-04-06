#include <stdio.h>

/*
typedef用法：
1.为基本类型定义新的类型名。
2.为自定义类型数据定义简洁的名称
3.为数组定义简洁的类型名称
4.为指针定义简洁的名称。
5.为函数指针定义一个该类函数指针的数据类型。

参考文章：http://c.biancheng.net/view/298.html

*/
struct Student
{
    int ID;
    char *name;
};

int fun(int a, int b);

int main()
{
    //用法1
    typedef unsigned long u32;
    u32 x = 1;
    printf("%d\n", x);

    //用法2
    typedef struct Student stu;
    stu student = {10086, "sakura"};
    printf("%d\n", student.ID);
    printf("%s\n", student.name);

    //用法3
    typedef int SHUZU[100];
    SHUZU num = {1, 2, 3};
    printf("%d\n", num[1]);

    //用法4
    typedef char* STRING;
    STRING str = "saber";
    printf("%s\n", str);    

    //用法5
    //不使用typedef时
    // int (*p)(int, int);  //定义一个指向函数的指针，要求函数的返回类型为int，参数为int,int。
    int(*p)(int, int) = fun;
    // p pfun = fun; //出错，因为p是一个函数指针，不是这类函数指针的类型，不能用来定义变量
    int yyy=p(3, 4);
    printf("%d\n", yyy);

    //当使用typedef
    typedef int(*Q)(int, int); //将该类型的函数指针定义为数据类型Q
    Q qfun = fun; //用P就可以
    int xxx=qfun(3, 4);
    printf("%d\n", xxx);
}

int fun(int a, int b)
{
    return a + b;
};