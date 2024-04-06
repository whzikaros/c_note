#include <stdio.h>

/*
关键字volatile是一种类型修饰符：
提醒编译器它后面所定义的变量随时都有可能改变，因此编译后的程序每次
需要存储或读取这个变量的时候，告诉编译器对该变量不做优化，都会直接
从变量内存地址中读取数据，从而可以提供对特殊地址的稳定访问。

应用场景(经常会改变的变量)：
1.并行设备的硬件寄存器。
2.中断服务程序中修改的供其它程序检测的变量，需要加volatile。
3.多任务环境下各任务间共享的标志，应该加volatile；
4.存储器映射的硬件寄存器通常也要加volatile说明，因为每次对它的读写都可能由不同意义；

参考博客：https://zhuanlan.zhihu.com/p/343688629
*/


typedef struct Student
{
    volatile int a;
    int b;
    int c;
} S;

int main()
{
    S s={100,1,2};
    int d = s.a;
    printf("%d\n", d);
}