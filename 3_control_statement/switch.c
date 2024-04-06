#include <stdio.h>

/*
switch语句使用

注意：
每个case语句需要加一个break，否则会继续往下运行。(包括后面的default)


*/


int main(int argc,char *argv[])
{
    char op;
    int a = 5, b = 10;

    while(1)
    {
        scanf("%c", &op);
        getchar();
        switch(op)
        {
            case '+':
            {
                printf("%d\n", a + b);
                break;
            }
            case '-':
            {
                printf("%d\n", a - b);
                break;
            }
            case '*':
            {
                printf("%d\n", a * b);
                break;
            }
            case '/':
            {
                printf("%d\n", a / b);
                break;
            }
            default:
                printf("error!\n");
        }
    }
    return 0;
}
