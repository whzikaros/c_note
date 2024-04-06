#include <stdio.h>
#include <string.h>

/*
字符串的标志是一串字符且末尾有空白符('\0')
字符指针就是指向字符串首地址的指针，也就是字符串第一个字符的地址。
字符串代表的是指向字符数组起始字符的指针。

注意：字符数组只有最后一个元素是'\0'才能代表字符串。
*/

void fun(char *s)
{
    while (*s!='\0')
    {
        printf("%c", *s);
        s++;
    }    
}

int main()
{
    //定义字符串并初始化
    char s1[] = "saber"; //编译器会自动为其加上'\0'
    char s2[6] = "iriya";
    char s3[7] = {"megumi"};

    printf("%s\n", s1);
    //字符指针指向字符串常量
    char *s = "hello world!";
    //s[3] = 'c';  //出bug，因为字符串保存在常量区，不可以通过指针对其进行写操作

    //输出字符串
    printf("字符串为：%s\n", s);

    //读取字符指针的内容，就是字符串的第一个字符
    printf("%c\n", *s);

    //更改字符指针指向
    s = s1;
    printf("%s\n", s);

    //传参
    fun(s);
}