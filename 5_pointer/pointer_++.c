#include <stdio.h>

int main()
{
    short a = 0;
    short *p = &a;
    printf("%d\n", p);  //6422030
    p += 1;  //根据指针的大小来加
    printf("new p: %d\n", p);  //6422032

    long b = 1;
    long *q = &b;
    printf("%d\n", q); //6422024
    q += 1;
    printf("new q: %d\n", q); //6422028
}
