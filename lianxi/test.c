#define _CRT_SECURE_NO_WARNINGS 1
//��ǰ����֪�����ڴ��ʹ�÷�����
//1.����һ������
//ջ�����ֲ�����  ��������ʽ����
//��������̬�ڴ����
//��̬����ȫ�ֱ��� ��̬����
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S arr[50];//50��struct S ���͵�����
//	//30��-�˷�
//	//60-����
//	return 0;
//}
//C�����ǿ��Դ����䳤����-c99������
//��̬�ڴ�����ڶ���
//malloc free calloc realloc
//malloc �����ڴ��
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<stdio.h>
//int main()
//{
//	//���ڴ�����10�����οռ�
//    int *p=(int *)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));//��ӡ������Ϣ��ʽ
//
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	free(p);//free�ͷ��˿ռ�p����ʵ��p��Ȼ�������ҵ�p����ַ
//	p = NULL;
//	return 0;
//	//�������������ڵ��˿ռ���Զ���������ϵͳ
//}
//�������ptrָ��Ŀռ䲻�Ƕ�̬���ٵģ���ôfree��������Ϊ��Ϊ����ġ�
//�������ptr��NULLָ�룬����ʲô�¶�����


//callo ����һ������Ԫ�س�ʼ��Ϊ 0

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
//	//�ͷſռ�
//	//free�����ͷ��ͷŶ�̬���ٿռ�
//	free(p);
//	p = NULL;
//	return 0;
//}
//


//realloc  ������̬�ڴ�ռ��С
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
	//������ʹ��malloc���ٵ�20���ֽڿռ�
	//�������20�ֽڲ����������ǵ�ʹ��
	//ϣ����������40���ֽڵĿռ�
	//����Ϳ���ʹ��realloc��������̬�ռ�
	int*p2=realloc(p, 40);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d", *(p2 + i));
	}
	return 0; 
			
}










































