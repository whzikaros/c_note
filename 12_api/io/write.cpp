#include <unistd.h>
/*
函数原型：
ssize_t write(int filedes, const void *buf, size_t nbytes);

作用：write 函数向 filedes 中写入 nbytes 字节数据，数据来源为 buf 
返回值：写入文件的字节数（成功）；-1（出错）
*/
