#include <stdio.h>
#include <string.h>

/*
枚举数据类型：描述一组有限个数据值组成的整型值的集合。

如果元素没有设置值则默认第一个元素为0，其他元素值逐个+1
*/
enum response
{
    no=-1,
    yes=0,
    none=1
};

enum res
{
    a,
    b,
    c
};

int main()
{
    enum response r;
    r = yes;

    printf("%d\n", r);

    enum res r1;
    r1 = b;

    printf("%d\n", b);
}