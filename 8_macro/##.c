#include <stdio.h>

/*
两个##是连接符，即把两个宏变量拼接到一起。

参考文章：
https://blog.csdn.net/little_grapes/article/details/123834446
*/

#define LINK(x, y) fun_##x(y)   //走fun_12()函数

int fun_12(int y)
{
    return y;
}

int fun_34(int x)
{
    return x + 1;
}

// #define POWER(x, y) x##y

int main()
{
    int n = LINK(12, 34);
    printf("%d\n", n);
}
