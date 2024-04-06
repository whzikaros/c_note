#include <stdio.h>

/*
%d  十进制有符号int
%u  十进制无符号int
%f  以小数形式(默认6位)输出float,double
%e  以指数形式(6位)输出float,double
%c  以字符形式输出

%o  以八进制不带前缀输出int
%x  以十六进制不带前缀输出int


%ld 十进制有符号long
%lu 十进制无符号long
%hd 十进制有符号short
%hu 十进制无符号short
%Lf 十进制小数形式long double
%Le 十进制指数形式long double

printf函数无法区分float和double

*/

int main()
{
    int a = 1;
    short b = 2;
    long c = 3;
    unsigned int d = 4;

    printf("%d\n",a);
    printf("%hd\n",b);
    printf("%ld\n",c);
    printf("%u\n",d);

    float x = 1.0;
    double y = 2.0;
    long double z = 3.222;

    printf("%f\n",x);
    printf("%f\n",y);
    printf("%f\n",z); //显示输出0.00000

    char ch = 'a';
    printf("%c\n",ch);
}