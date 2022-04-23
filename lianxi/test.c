#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//求字符串长度
//strlen
//计数器方法
//递归
//指针减指针
//size_t==unsigned int 
// size_t不会返回负数  int会返回负数
//strlen 返回类型是size_t
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = strlen("ancdef");
//	////错误示范
//	//char arr[] = { 'a','b','c','d','e','f' };
// 	//int len = strlen(arr);
//	printf("%d\n", len);
//}
//strcpy  字符串拷贝
//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL && src != NULL);
//	char* ret = dest;
//	//拷贝src指向字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//		//*dest++= *src++;
//		//拷贝bit
//	}
//	//返回目的空间的起始地址
//	return ret;
//	//*dest = *src;//拷贝'\0'
//
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//	//错误示范
//	//char arr[] = { 'b','i','t' };没有\0位置
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//
//}



//strcat字符串追加
char* my_strcat(char*dest,const char*src)
{              //目的地     源头
	
	char* ret = dest;
	assert(dest != NULL);
	assert(src);
	//找到目的字符串'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//追加
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);//源头 arr2拷贝到目的地arr1
	printf("%s\n", arr1);
}





















