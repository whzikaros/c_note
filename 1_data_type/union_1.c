#include <stdio.h>
#include <string.h>

/*
共用体：把情形互斥且逻辑相关的多种不同类型的变量，组织到统一的名字之下。

共用体所占字节取决于占空间最多的那个成员变量。
*/

union maritalState
{
    int single;  //未婚
    int married;  //已婚
    int divorce;  //离婚
};

int main()
{
    union maritalState m;
    m.single = 0;
    printf("%d\n", m.single);
}