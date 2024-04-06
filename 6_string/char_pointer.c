#include <stdio.h>
#include <string.h>

/*
字符指针
指针值是字符串首个字符的地址，即字符串本身
指向的值是字符串的首个字符。

字符指针
就是指向字符串首个字符的指针，也就是字符串第一个字符的地址(也就是字符串本身)。因为字符串第一个字符的地址就是字符串本身。

注意：
1.字符指针可以改变指针的值(也就是指向)，但是不能改变指向的内容也就是字符串，因为字符串是一个常量
2.字符指针只能指向字符串，不能指向字符。
*/

int main()
{ 
	// char *ptr = "saber"; //可以成功运行，但是会warning
	char *ptr = NULL;
	char str[] = "asuna";
	ptr = str;
    printf("%c\n", *ptr);
    printf("%s\n", ptr);

	return 0;
}