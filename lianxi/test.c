#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//������
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
	////1.��NULLָ�������
	//int* p = malloc(40);
	////p������ص��ж�
	//*p = 10;//malloc���ٿռ�ʧ���п��ܶ�NULLָ�������
	////�Զ�̬�����ڴ��Խ�����
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	////Խ��
	//for (i = 0; i <= 10; i++)
	//{
	//	*(p + i) = i;//Խ�����
	//}
	//free(p);
	//p = NULL;
	//4. ʹ��free�ͷŶ�̬�����ڴ��һ����
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
	////���տռ�
	////4. ʹ��free�ͷŶ�̬�����ڴ��һ���� 
	//free(p);//p����仯�ͷŵ�ֻ�ǵ�ǰλ�ÿռ䣬p�����ͷŵ��Ǹտ�ʼ���ٵĿռ�
	//p = NULL;
	//return 0;
	
	
	//5.��ͬһ��鶯̬�ڴ�Ķ���ͷ�

	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////ʹ��
	////�ͷ�
	//free(p);
	//p = NULL;//p��Ϊ��ָ��������ٴ��ͷţ�������Ч
	//free(p);
	////˭����˭�ͷ�



	//6.�Զ�̬�����ڴ������ͷţ��ڴ�й¶��
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
//	char* str = NULL;//str�з���һ����ָ��
//	GetMemory(str);//������֮��GetMemory�����ɷ����ǿ�ָ��
//	strcpy(str, "hello world");//������
//	printf(str);
//	//���д���������ֱ���������
//	//��������ڴ�й¶����
//	//str��ֵ���ݵ���ʽ��p
//	//p��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷ�
//	//�����޷��ҵ������Ի�����ڴ�й¶
//}
//int main()
//{
//	Test();
//	/*char* str = "abcdef";
//	printf("%s\n", str); */
//	return 0;
//}

//����һ
//void GetMemory(char* *p)
//{
//	*p = (char*)malloc(100);//�ѿ��ٺõĵ�ַ����*p��
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




















