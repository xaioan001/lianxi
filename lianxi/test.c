
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
// 
// 
// 
////�ṹ���ڴ����
//struct S1
//{
//	int b;
//	int a;
//	char c1;
//	char c2;
//};
///*������μ��㣿���ȵ����սṹ��Ķ������
//1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
//2������Ա����Ҫ���뵽ĳ������
//�������������������ĵ�ַ��
//��������������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ
//��VS��Ĭ�Ե�ֵΪ8
//3.�ṹ���ܴ�СΪ��������
//��ÿ����Ա��������һ��������������������
//4.���Ƕ���˽ṹ��������
//Ƕ�׵Ľṹ����뵽�Լ�����������������������
//�ṹ��������С��������������������Ƕ�׽ṹ��Ķ�����������������
//*/
//struct S2
//{
//	double e;
//	char c1;
//	char c2;
//	/*int a;
//	float c;*/
//	
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//} 
//struct S3
//{
//	double a;
//	char b;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S3 ));
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}
//������˵
//�ṹ����ڴ�������ÿռ�����ȡʱ�������
//Ĭ�϶���������
////����Ĭ�϶�����Ϊ4 
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
// //ȡ��Ĭ�϶�����
//int main()
//{
//	struct S  s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
//    #pragam �����޸�Ĭ�϶�����
#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	//offsetof();����ƫ����
//	//offsetof();  �Ǻ�
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}



//�ṹ�崫��
struct S
{
	int a;
	char c;
	double d;
};
void Init(struct S*ps)
{
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}
int main()
{
	struct S s = { 0 };
	/*s.a = 100;
	s.c = 'w';
	s.d = 3.14;
*/
	Init(&s);
	return 0;
}













