#define _CRT_SECURE_NO_WARNINGS 1
//BIT-7-���򻷾���Ԥ����

//2. ������+����
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
���һ�������ÿ��Դ�ļ�ͨ��������̷ֱ�ת����Ŀ����루object code����
ÿ��Ŀ���ļ�����������linker��������һ���γ�һ����һ�������Ŀ�ִ�г���
������ͬʱҲ�������׼C���������κα��ó������õ��ĺ�����������������������Ա���˵ĳ���⣬������Ҫ�ĺ���Ҳ���ӵ�������
*/

//��������Σ�	1.Ԥ���루�ı�������gcc - E test.c [test.i]	
//				2.���루�﷨���ʷ���������������ϻ��ܣ�gcc - S test.i [test.s]
//				3.��ࣨת���ɶ�����ָ��,�γɷ��ϱ� gcc - c test.s [test.o]
//���ӣ���1.�ϲ��α�	2.���ű�ĺϲ����ض�λ��

//2.3 ���л���
//3. Ԥ�������
//3.1 Ԥ�������
/*
__FILE__ //���б����Դ�ļ�
__LINE__ //�ļ���ǰ���к�
__DATE__ //�ļ������������
__TIME__ //�ļ��������ʱ��
__STDC__ //�����������ѭANSI C����ֵΪ1������δ����
*/

//int main()
//{
//	printf("%s\n", __FILE__);//G:\C_Text\BIT-7-P76\BIT-7-P76\test.c
//	printf("%d\n", __LINE__);//49
//	printf("%s\n", __DATE__);//Oct 25 2023
//	printf("%s\n", __TIME__);//20:53:30
//	//printf("%d\n", __STDC__);//err
//	
//	//д��־
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
//3.2.1 #define �����ʶ��
#define MAX 1000
#define reg register //Ϊ register����ؼ��֣�����һ����̵�����
#define do_forever for(;;) //�ø�����ķ������滻һ��ʵ��
#define CASE break;case //��дcase����ʱ���Զ��� breakд�ϡ�

// �������� stuff���������Էֳɼ���д���������һ���⣬ÿ�еĺ��涼��һ����б��(���з�)��
#define DEBUG_PRINT printf("file:%s\tline:%d\t \
date:%s\ttime:%s\n" ,\
__FILE__,__LINE__ , \
__DATE__,__TIME__ )

