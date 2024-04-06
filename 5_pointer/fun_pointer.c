#include <stdio.h>
#include <string.h>

/*
函数指针：一个指向函数的指针变量，指针变量存储的是函数的地址。

语法：
数据类型 (*指针变量名)(形参列表)

数据类型 (*指针变量名)(形参列表)中间的空格可以省略
函数名代表函数的起始地址。
回调函数就是一个通过函数指针调用的函数。

*/

int fun(int a, int b)
{
    return a + b;
};

void Fun(int a, int b, int (*f)(int, int)) // 此时传入的fun就是回调函数
{
    int res = f(a, b);
    printf("%d\n", res);
};

int main()
{
    int x = 5, y = 10;
    Fun(x, y, fun);
}
