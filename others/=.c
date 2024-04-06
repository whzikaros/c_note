#include <stdio.h>

int main()
{
    int a = 1, b = 2;
    int c, d;
    c = (a = 3);
    d = b = 4;
    printf("c是%d\n", c);  //3
    printf("d是%d\n", d);  //4
}