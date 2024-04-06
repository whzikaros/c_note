#include <stdio.h>
#include <assert.h>

/*
assert用于测试一个条件，不正确的话则程序终止。
*/


int main(int argc,char *argv[])
{
    int x = 10;
    assert(x > 10);
    printf("%d\n", x);
    return 0;
}
