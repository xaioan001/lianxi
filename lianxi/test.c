
#include<stdio.h>
#include<string.h>
#include<assert.h>
 
//���Ӷ���
//��������
//�Զ������ͣ��ṹ�壬ö�٣�����
//�ṹ�����֪ʶ
//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı�����
//�ṹ��ؼ��� struct

//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������������
//����ѧ��������-����+�绰+�Ա�
//struct Stu    //struct�ṹ��ؼ���   Stu�Ǳ�ǩ
//	         //û��Stu������ǩ ��������� ��Ϊ�����ṹ������
//{
//	char name[20];//����      
//	char tele[12];//�绰          ��Ա����
//	char sex[10];//�Ա�
//	int age;
//}s4,s5,s6;
//struct Stu s3;//s3,s4,s5,s5����ȫ�ֱ��� 
//int main()
//{
//	//�����Ľṹ�����
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}
//�����ṹ���������£�
//struct
//{
//	int a;
//	char c;
//}sa;
////�����ṹ��ָ������
//struct
//{
//	int a;
//	char c;
//}*psa;
//int main()
//{
//	//psa = &sa;�ṹ�������ͬ  ���������������������������ȫ��ͬ���������ͣ������ǷǷ��ġ�
//
//	return 0;
//}
//struct Node
//{
//	int data;
//	//struct Node n;
//	//�����һ����ַ
//	struct Node* next;
//};
//
//int main()
//{
//	
//	return 0;
//}
//typedef struct Node
//{
//	int data;
//	//struct Node n;
//	//�����һ����ַ
//	struct Node* next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	 Node	n2;
//	return 0;
//}
//�ṹ�������ʼ��
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	struct T st;
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//struct S s = { 'c',100,3.14,"hello bit" };
//	struct S s = { {55.6,30},'c',100,3.14,"hello bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight);
//	return 0;
//}
//�ṹ���ڴ����
struct S1
{
	char c1;
	int a;
	char c2;
};
struct S2
{
	char c1;
	char c2;
	int a;
};
int main()
{
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));
	return 0;
}














