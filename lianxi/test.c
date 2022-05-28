#define _CRT_SECURE_NO_WARNINGS 1
//当前我们知道的内存的使用方法：
//1.创建一个变量
//栈区：局部变量  函数的形式参数
//堆区：动态内存分配
//静态区：全局变量 静态变量
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S arr[50];//50个struct S 类型的数据
//	//30人-浪费
//	//60-不够
//	return 0;
//}
//C语言是可以创建变长数组-c99中增加
//动态内存分配在堆上
//malloc free calloc realloc
//malloc 开辟内存块
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<stdio.h>
//int main()
//{
//	//向内存申请10个整形空间
//    int *p=(int *)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));//打印错误信息方式
//
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + 1) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d", *(p + i));
//		}
//	}
//
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	free(p);//free释放了空间p，其实是p依然有能力找到p这块地址
//	p = NULL;
//	return 0;
//	//当程序生命周期到了空间会自动还给操作系统
//}
//如果参数ptr指向的空间不是动态开辟的，那么free函数的行为是为定义的。
//如果参数ptr是NULL指针，则函数什么事都不做


//callo 开辟一个数组元素初始化为 0

//int main()
//{
//	//malloc(10*sizeof(int))
//	int *p=(int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数释放释放动态开辟空间
//	free(p);
//	p = NULL;
//	return 0;
//}
//


//realloc  调整动态内存空间大小
int main()
{
	int*p=(int*)malloc(20);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
		
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	//就是在使用malloc开辟的20个字节空间
	//假设这里，20字节不能满足我们的使用
	//希望我们能有40个字节的空间
	//这里就可以使用realloc来调整动态空间
	int*p2=realloc(p, 40);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", *(p2 + i));
	}
	return 0; 
			
}










































