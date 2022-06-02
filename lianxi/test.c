#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//错误案例
// 
// 
// 
//int main()
//{
//	/*int* p = (int*)malloc(40);
//	if (p = NULL)
//	{
//		return 0;
//
//	}
//	int* p2 = realloc(p, 80);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}*/
//	int* p = realloc(NULL, 40);//malloc
//	
//	
//	
//	return 0;
//}
//int main()
//{
	////1.对NULL指针解引用
	//int* p = malloc(40);
	////p进行相关的判断
	//*p = 10;//malloc开辟空间失败有可能对NULL指针解引用
	////对动态开辟内存的越界访问
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	////越界
	//for (i = 0; i <= 10; i++)
	//{
	//	*(p + i) = i;//越界访问
	//}
	//free(p);
	//p = NULL;
	//4. 使用free释放动态开辟内存的一部分
	//int* p = (int*)malloc;
	//if(p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*p++ = i;
	//}
	////回收空间
	////4. 使用free释放动态开辟内存的一部分 
	//free(p);//p如果变化释放的只是当前位置空间，p不变释放的是刚开始开辟的空间
	//p = NULL;
	//return 0;
	
	
	//5.对同一块块动态内存的多次释放

	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////使用
	////释放
	//free(p);
	//p = NULL;//p置为空指针对下面再次释放，下面无效
	//free(p);
	////谁申请谁释放



	//6.对动态开辟内存忘记释放（内存泄露）
	/*while (1)
	{
		malloc(1);
	}

	return 0;*/
    

//}
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;//str中放了一个空指针
//	GetMemory(str);//调用完之后GetMemory中依旧方的是空指针
//	strcpy(str, "hello world");//程序奔溃
//	printf(str);
//	//运行代码程序会出现奔溃的现象
//	//程序存在内存泄露问题
//	//str以值传递的形式给p
//	//p是GetMemory函数返回之后，动态开辟内存尚未释放
//	//并且无法找到，所以会造成内存泄露
//}
//int main()
//{
//	Test();
//	/*char* str = "abcdef";
//	printf("%s\n", str); */
//	return 0;
//}

//改正一
//void GetMemory(char* *p)
//{
//	*p = (char*)malloc(100);//把开辟好的地址放在*p中
// }
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}
void Test(void)
{
	char* str = NULL;
	str=GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}




















