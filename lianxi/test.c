#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//char* GetMemory(void)
//{
//	char p[] = "hello world";  //p���� hello world\0
//	return p;//������p���ռ仹������ϵͳ��������þͷǷ�����
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
//	int a = 10;//ջ��
//	return &a;//�������ռ仹������ϵͳ
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//�Ƿ�����
//}
//int* test()
//{
//	static int a = 10;//��̬��
//	return &a;//static�����������ڱ䳤
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//int* test()
//{
//	int* ptr = malloc(100);//����
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
//	strcpy(str, "hello");//str�з�hello\0�ĵ�ַ
//	free(str);//���ٵĿռ仹������ϵͳ ����Ȼstr�д洢hello\0��ַ�������ܷ���
//	if (str != NULL)//free�����str��Ϊ��ָ��
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




//��������
//c99�У�����е����һ��Ԫ��������δ֪��С�����飬��ͽ������������顿��Ա��
//struct S
//{
//	int n;
//	int arr[];//δ֪��С��--���������Ա--�����С�ǿ��Ե�����
//};
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));//�ڼ���ṹ���Сʱ�����������������С
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
//	for (i = 0; i < 5; i++)//�ȴ��
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//	  printf("%d",ps->arr[i] = i);//�ٴ�ӡ
//	}
//	//������С
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
//	//�ͷ��ڴ�
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}




//�ṹ�е����������Աǰ���������һ��������Ա
//sizeof���ص����ֽṹ���С����������������ڴ�
//�������������Ա�Ľṹ��malloc()���������ڴ涯̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ��Ĵ�С������Ӧ���������Ԥ�ڴ�С
struct S
{
	int n;
	char c;
	int arr[0];//���������Ա
};
int main()
{
	printf("%d", sizeof(struct S));
	return 0;
}















