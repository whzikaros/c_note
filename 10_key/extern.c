#include <stdio.h>

/*
关键字extern：可以在一个文件中引用另一个文件中定义的变量或函数。

注意：extern只对全局变量有用。

参考博客：https://blog.csdn.net/xingjiarong/article/details/47656339
*/

//此处只展示在一个文件中引用本文件的变量
int func();

int main()
{
    func();
    extern int num; 
    printf("%d",num); //利用extern关键字，使用在后边定义的变量。
    return 0;
}

int num = 3;

int func()
{
    printf("%d\n", num);
}
