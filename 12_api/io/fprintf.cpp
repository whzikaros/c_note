/*
int fprintf( FILE *stream, const char *format, ... ); 

作用：传送format给文件stream，也就是存数据到文件中。
参数：参数1：文件流，参数2：格式，如%d 后面的参数是要存的数据
返回值：
成功时输出的字符数,发生错误时返回一个负值. 
在LINUX/UNIX操系统中成功返回0，失败返回-1。并置errno值.  

*/