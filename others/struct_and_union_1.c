#include <stdio.h>
#include <string.h>

/*

*/

typedef struct
{
    union
    {
        int male;
        char female;
        int other;
    };
    char name[10];
    int age;
}stu;

typedef union
{
    struct
    {
        char name[10];
        int age;
    };
    int name_1;
}stu1;

int main()
{
    //结构体内有联合体，联合体的值均可使用
    stu s = {1, {"saber"}, 18};
    printf("%d\n", s.male);
    printf("%d\n", s.female);

    //联合体内有结构体
    stu1 s1_0 = {{"saber", 18}}; //初始化第一个成员
    printf("%d\n", s1_0.age);
    printf("%d\n", s1_0.name_1);   //未初始化，溢出

    stu1 s1_1 = {.name_1 = 666}; //初始化第二个成员
    printf("%d\n", s1_1.age);  //未初始化，结构体默认初始化成员为0
    printf("%d\n", s1_1.name_1);    
}
