#define _CRT_SECURE_NO_WARNINGS 1
//BIT-7-程序环境和预处理

//2. 详解编译+链接
#include <stdio.h>
//extern int add(int x, int y);
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	int c = add(1, 3);
//	printf("c=%d\n", c);
//	return 0;
//}

/*
组成一个程序的每个源文件通过编译过程分别转换成目标代码（object code）。
每个目标文件由链接器（linker）捆绑在一起，形成一个单一而完整的可执行程序。
链接器同时也会引入标准C函数库中任何被该程序所用到的函数，而且它可以搜索程序员个人的程序库，将其需要的函数也链接到程序中
*/

//编译分三段：	1.预编译（文本操作）gcc - E test.c [test.i]	
//				2.编译（语法、词法、语义分析，符合汇总）gcc - S test.i [test.s]
//				3.汇编（转换成二进制指令,形成符合表） gcc - c test.s [test.o]
//链接：（1.合并段表	2.符号表的合并和重定位）

//2.3 运行环境
//3. 预处理详解
//3.1 预定义符号
/*
__FILE__ //进行编译的源文件
__LINE__ //文件当前的行号
__DATE__ //文件被编译的日期
__TIME__ //文件被编译的时间
__STDC__ //如果编译器遵循ANSI C，其值为1，否则未定义
*/

//int main()
//{
//	printf("%s\n", __FILE__);//G:\C_Text\BIT-7-P76\BIT-7-P76\test.c
//	printf("%d\n", __LINE__);//49
//	printf("%s\n", __DATE__);//Oct 25 2023
//	printf("%s\n", __TIME__);//20:53:30
//	//printf("%d\n", __STDC__);//err
//	
//	//写日志
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//		/*
//		file:G:\C_Text\BIT-7-P76\BIT-7-P76\test.c line:61 date:Oct 25 2023 time:21:01:16 i=0
//		file:G:\C_Text\BIT-7-P76\BIT-7-P76\test.c line:61 date:Oct 25 2023 time:21:01:16 i=1
//		file:G:\C_Text\BIT-7-P76\BIT-7-P76\test.c line:61 date:Oct 25 2023 time:21:01:16 i=2
//		file:G:\C_Text\BIT-7-P76\BIT-7-P76\test.c line:61 date:Oct 25 2023 time:21:01:16 i=3
//		file:G:\C_Text\BIT-7-P76\BIT-7-P76\test.c line:61 date:Oct 25 2023 time:21:01:16 i=4
//		file:G:\C_Text\BIT-7-P76\BIT-7-P76\test.c line:61 date:Oct 25 2023 time:21:01:16 i=5
//		file:G:\C_Text\BIT-7-P76\BIT-7-P76\test.c line:61 date:Oct 25 2023 time:21:01:16 i=6
//		file:G:\C_Text\BIT-7-P76\BIT-7-P76\test.c line:61 date:Oct 25 2023 time:21:01:16 i=7
//		file:G:\C_Text\BIT-7-P76\BIT-7-P76\test.c line:61 date:Oct 25 2023 time:21:01:16 i=8
//		file:G:\C_Text\BIT-7-P76\BIT-7-P76\test.c line:61 date:Oct 25 2023 time:21:01:16 i=9
//		*/
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//0 1 2 3 4 5 6 7 8 9
//	}
//	return 0;
//}


//3.2 #define
//3.2.1 #define 定义标识符
#define MAX 1000
#define reg register //为 register这个关键字，创建一个简短的名字
#define do_forever for(;;) //用更形象的符号来替换一种实现
#define CASE break;case //在写case语句的时候自动把 break写上。

// 如果定义的 stuff过长，可以分成几行写，除了最后一行外，每行的后面都加一个反斜杠(续行符)。
#define DEBUG_PRINT printf("file:%s\tline:%d\t \
date:%s\ttime:%s\n" ,\
__FILE__,__LINE__ , \
__DATE__,__TIME__ )

