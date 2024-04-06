#include <stdio.h>

/*
一个#的作用就是把后面的参数当做一个字符串，等同于把后面的宏变量加上双引号。

参考文章：
https://blog.csdn.net/little_grapes/article/details/123834446
*/
#define PRINT(NAME) printf(NAME)
#define PRINT1(NAME) printf(#NAME)

int main()
{
    PRINT(saber);  //出bug，因为saber不是一个字符串，不能通过printf()打印。
    printf("\n");
    PRINT1(saber);
}


