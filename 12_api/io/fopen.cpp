
/*
fopen()函数：
FILE * fopen(const char * path, const char * mode);

作用：打开一个文件。
参数：
path为包含了路径的文件名，mode为文件打开方式。
返回值：
文件顺利打开后，指向该流的文件指针就会被返回。
如果文件打开失败则返回NULL，并把错误代码存在errno 中。
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  FILE* fstream;
  char msg[100] = "Hello!I have read this file.";
  fstream=fopen("test.txt","at+");
  if(fstream==NULL)
  {
    printf("open file test.txt failed!\n");
    exit(1);
  }
  else
  {
    printf("open file test.txt succeed!\n");
  }
  fclose(fstream);
  return 0;
}

