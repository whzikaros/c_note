

/*
fdopen()函数
FILE * fdopen(int fildes, const char * mode);

作用：fdopen()会将参数fildes 的文件描述符, 转换为对应的文件指针后返回.
参数：path为包含了路径的文件名，mode为文件打开方式。
返回值：转换成功时返回指向该流的文件指针. 失败则返回NULL, 并把错误代码存在errno 中.

和fopen的区别是这是打开一个文件描述符，fopen是打开文件。
*/
#include <stdio.h>
int main()
{
  FILE * fp = fdopen(0, "w+");
  fprintf(fp, "%s\n", "hello!");
  fclose(fp);
}
