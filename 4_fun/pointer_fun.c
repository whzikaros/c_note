#include <stdio.h>
#include <string.h>

/*
指针函数：返回类型为指针的函数
*/

int *fun(int *a) //指针函数
{
    return a;
}

int main()
{
    int a = 5;
    int *a_ptr = &a;
    printf("%d\n", *a_ptr);
    
    int *b_ptr = fun(a_ptr);
    printf("%d\n", *b_ptr);
}
