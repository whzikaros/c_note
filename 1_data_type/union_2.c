#include <stdio.h>
#include <string.h>

/*
联合体：把情形互斥且逻辑相关的多种不同类型的变量，组织到统一的名字之下。

自己验证的初始化方法：
用一个变量初始化时，会将所有元素初始化为该变量。

网上的联合体初始化方法(可能是C99标准)：
1.用一个变量只初始化第一个元素。
2.指定初始化元素进行初始化(需要使用.) （C99标准，使用指定初始化器）

联合体所占字节取决于占空间最多的那个成员变量。
*/

typedef union
{
    struct
    {
        char name[10];
        int age;
    };
    int name_1;
    char a;
}stu;

int main()
{
    //初始化第一个成员
    stu s = {{"saber", 18}}; 
    printf("%d\n", s.age);
    
    //初始化第二个成员
    stu s1 = {.name_1 = 97}; 
    printf("%d\n", s1.name_1);    
    printf("%c\n", s1.a); //初始化为97

    //自己验证的方法
    stu s2 = {97}; 
    printf("%d\n", s2.age);  //初始化为97，但是成员未初始化，结构体默认初始化成员为0
    printf("%d\n", s2.name_1);  //初始化为97  
    printf("%c\n", s2.a); //初始化为97  
}