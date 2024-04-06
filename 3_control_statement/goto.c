#include <stdio.h>

/*
goto语句
*/


int main(int argc,char *argv[])
{
    int x = 10;
    if (x!=10)
    {
        goto error;
    }
    error:
        printf("There is a error!\n");
    return 0;
}
