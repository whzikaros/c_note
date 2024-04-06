#include <unistd.h>
/*
函数原型：
ssize_t read(int filedes, void *buf, size_t nbytes);

作用：read 函数从 filedes 指定的已打开文件中读取 nbytes 字节到 buf 中。
返回值：读取到的字节数；0（读到 EOF）；-1（出错）
*/