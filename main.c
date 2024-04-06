#include <stdio.h>

/*


*/

int main(int argc,char *argv[])
{
    char a = 10;
    char b = a;
    char *p = (char *)b;
    *p = 100;

    printf("%d\n",a);
    return 0;
}
