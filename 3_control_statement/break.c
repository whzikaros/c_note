#include <stdio.h>

/*
break只跳出单层循环
*/


int main(int argc,char *argv[])
{
    for (int i = 0; i < 10;i++)
    {
        for (int j = 0; j < 10;j++)
        {
            printf("%d, %d\n", i, j);
            break;
        }
    }
        return 0;
}
