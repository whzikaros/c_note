/*
参考文章：https://www.runoob.com/cprogramming/c-standard-library-string-h.html


*/

//把 src 所指向的字符串复制到 dest。
char *strcpy(char *dest, const char *src);

//把 src 所指向的字符串复制到 dest，最多复制 n 个字符。
char *strncpy(char *dest, const char *src, size_t n);

//在参数 str 所指向的字符串的前 n 个字节中搜索第一次出现字符 c（一个无符号字符）的位置。
void *memchr(const void *str, int c, size_t n);

// 把 str1 和 str2 的前 n 个字节进行比较。
int memcmp(const void *str1, const void *str2, size_t n);

// 从 src 复制 n 个字符到 dest。
void *memcpy(void *dest, const void *src, size_t n);;

// 另一个用于从 src 复制 n 个字符到 dest 的函数。
void *memmove(void *dest, const void *src, size_t n);

// 复制字符 c（一个无符号字符）到参数 str 所指向的字符串的前 n 个字符。
void *memset(void *str, int c, size_t n);

// 把 src 所指向的字符串追加到 dest 所指向的字符串的结尾。
char *strcat(char *dest, const char *src);

//把 src 所指向的字符串追加到 dest 所指向的字符串的结尾，直到 n 字符长度为止。
char *strncat(char *dest, const char *src, size_t n);

//在参数 str 所指向的字符串中搜索第一次出现字符 c（一个无符号字符）的位置。
char *strchr(const char *str, int c);

//把 str1 所指向的字符串和 str2 所指向的字符串进行比较。
int strcmp(const char *str1, const char *str2);

//把 str1 和 str2 进行比较，最多比较前 n 个字节。
int strncmp(const char *str1, const char *str2, size_t n);

//把 str1 和 str2 进行比较，结果取决于 LC_COLLATE 的位置设置。
int strcoll(const char *str1, const char *str2);

//检索字符串 str1 开头连续有几个字符都不含字符串 str2 中的字符。
size_t strcspn(const char *str1, const char *str2);

//从内部数组中搜索错误号 errnum，并返回一个指向错误消息字符串的指针。
char *strerror(int errnum);

//计算字符串 str 的长度，直到空结束字符，但不包括空结束字符。
size_t strlen(const char *str);

//检索字符串 str1 中第一个匹配字符串 str2 中字符的字符，不包含空结束字符。也就是说，依次检验字符串 str1 中的字符，当被检验字符在字符串 str2 中也包含时，则停止检验，并返回该字符位置。
char *strpbrk(const char *str1, const char *str2);

//在参数 str 所指向的字符串中搜索最后一次出现字符 c（一个无符号字符）的位置。
char *strrchr(const char *str, int c);

//检索字符串 str1 中第一个不在字符串 str2 中出现的字符下标。
size_t strspn(const char *str1, const char *str2);

//在字符串 haystack 中查找第一次出现字符串 needle（不包含空结束字符）的位置。
char *strstr(const char *haystack, const char *needle);

//分解字符串 str 为一组字符串，delim 为分隔符。
char *strtok(char *str, const char *delim);

//根据程序当前的区域选项中的 LC_COLLATE 来转换字符串 src 的前 n 个字符，并把它们放置在字符串 dest 中。
size_t strxfrm(char *dest, const char *src, size_t n);
