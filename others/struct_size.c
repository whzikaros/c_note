#include <stdio.h>
#include <string.h>

/*
计算结构体的大小：
1、结构体变量中的每个成员相对于结构体首地址的偏移量，都是该成员基本数据类型所占字节的整数倍。（对齐，数组的话基本数据类型只看单个元素的）
2、结构体变量的总大小，为结构体变量中“最大基本数据类型成员所占字节数”的整数倍（最大基本数据类型成员不包括数组和内部结构体）

计算含有数组的结构体大小：
1.如果下一个成员是数组，则不需要偏移，只要连续开辟空间。
比如int a 下一个是char数组[10]，只要满足那么int a和char数组就是连续的
2.只需要与数组的单个元素的基本类型做对齐

计算含有结构体的结构体大小：
只需要与嵌套的结构体里最大的基本类型做对齐

原文链接：https://blog.csdn.net/qq_44443986/article/details/110082316
*/

struct student
{
    int ID;
    char name[10];
    int scores[2];
    int age;
};

typedef struct student2
{
    int ID;
    char c;
    int age;
    double w;
}STUDENT;

typedef struct student3
{
    int ID;
    double w;
    char c;
    int age;
}STUDENT1
;

//嵌套结构体
struct studentss
{
    char ID;
    struct 
    {
        int b;
        double c;
        long d;
    }vv;
    int age;
}t;

int main()
{
    struct student s={10086,"saber",{100,100},18};

    /*结构体大小*/
    STUDENT sss;
    //不包含数组
    printf("%d\n", sizeof(sss)); //24，4+4+4+8 由于规则2，需要是8的整数倍，所以后面再加4
    printf("%d\n", &sss.ID);
    printf("%d\n", &sss.c);
    printf("%d\n", &sss.age);
    printf("%d\n", &sss.w);

    STUDENT1 sss1;
    //不包含数组
    printf("%d\n", sizeof(sss1)); 
    printf("%d\n", &sss1.ID);
    printf("%d\n", &sss1.w);
    printf("%d\n", &sss1.c);
    printf("%d\n", &sss1.age);

    //包含数组
    printf("%d\n", sizeof(s)); //28，4+12+8+4，由于4+10不是int4个字节的倍数，因此为4+12

    printf("%d\n", &s.ID);
    printf("%d\n", s.name);
    printf("%d\n", s.scores);
    printf("%d\n", &s.age);

    //包含结构体
    printf("%d\n", sizeof(t)); //40，8+24+8,第一个8是因为对齐结构体的double，第二个8是因为整体要对齐为8的倍数
    printf("%d\n", &t.ID);
    printf("%d\n", &t.vv);
    printf("%d\n", &t.age);
}
