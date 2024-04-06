#include <stdio.h>


/*
整型分为：
int--在目前大多数系统占4个字节
long int--占4个字节
short int--占2个字节
unsigned--用来修饰int,short,long，表示正整数和零

浮点型：
float--4个字节
double--8个字节
long double--大小和系统相关(vc++是8个字节)

字符型：
char--1个字节

枚举类型：


二进制：使用0b或0B开头
八进制：使用0开头
十六进制：使用0x或0X开头


*/
int main()
{
    int a = 0b101;      // 二进制
    int b = 015;  // 八进制
    int c = 0xffff;  // 十六进制

}