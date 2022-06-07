#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//char* GetMemory(void)
//{
//	char p[] = "hello world";  //p数组 hello world\0
//	return p;//出函数p这块空间还给操作系统，下面调用就非法访问
// 
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;  
//}
//int* test()
//{
//	int a = 10;//栈区
//	return &a;//出函数空间还给操作系统
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//非法访问
//}
//int* test()
//{
//	static int a = 10;//静态区
//	return &a;//static修饰生命周期变长
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//int* test()
//{
//	int* ptr = malloc(100);//堆区
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	return 0;
//}
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");//str中放hello\0的地址
//	free(str);//开辟的空间还给操作系统 ，虽然str中存储hello\0地址，但不能访问
//	if (str != NULL)//free不会把str置为空指针
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0; 
//}




//柔性数组
//c99中，结果中的最后一个元素允许是未知大小的数组，这就叫做【柔性数组】成员。
//struct S
//{
//	int n;
//	int arr[];//未知大小的--柔性数组成员--数组大小是可以调整的
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//在计算结构体大小时，不包含柔性数组大小
//	struct S* ps =(struct S*) malloc(sizeof(struct S)+5*sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0,1,2,3,4
//	}
//	struct S* ptr=realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps -> arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//struct S
//{
//	int n; 
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)//先存放
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//	  printf("%d",ps->arr[i] = i);//再打印
//	}
//	//调整大小
//	int*ptr= realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", ps->arr[i]);
//	}
//	//释放内存
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}




//结构中的柔性数组成员前面必须至少一个其他成员
//sizeof返回的这种结构体大小不包括柔性数组的内存
//包含柔性数组成员的结构体malloc()函数进行内存动态分配，并且分配的内存应该大于结构体的大小，以适应柔性数组的预期大小
struct S
{
	int n;
	char c;
	int arr[0];//柔性数组成员
};
int main()
{
	printf("%d", sizeof(struct S));
	return 0;
}















