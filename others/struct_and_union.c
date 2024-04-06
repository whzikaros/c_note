#include <stdio.h>

typedef struct 
{
    union {
        struct 
        {
            int a : 10;
            int b : 20;
        };
        int c;
    };
}student;


int main()
{
    student s;
    s.a = 1;
    s.b = 2;
    printf("%d\n", s.c); //1+2048
}
