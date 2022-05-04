
#include<stdio.h>
#include<string.h>
#include<assert.h>
 
//复杂对象
//复杂类型
//自定义类型：结构体，枚举，联合
//结构体基础知识
//结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量。
//结构体关键字 struct

//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量（对象）
//描述学生：属性-名字+电话+性别
//struct Stu    //struct结构体关键字   Stu是标签
//	         //没有Stu这样标签 后面加名字 称为匿名结构体类型
//{
//	char name[20];//名字      
//	char tele[12];//电话          成员变量
//	char sex[10];//性别
//	int age;
//}s4,s5,s6;
//struct Stu s3;//s3,s4,s5,s5都是全局变量 
//int main()
//{
//	//创建的结构体变量
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}
//匿名结构体类型如下：
//struct
//{
//	int a;
//	char c;
//}sa;
////匿名结构体指针类型
//struct
//{
//	int a;
//	char c;
//}*psa;
//int main()
//{
//	//psa = &sa;结构体变量相同  编译器会把上面两个声明当成完全不同的两个类型，所以是非法的。
//
//	return 0;
//}
//struct Node
//{
//	int data;
//	//struct Node n;
//	//存放下一结点地址
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
//	//存放下一结点地址
//	struct Node* next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	 Node	n2;
//	return 0;
//}
//结构体变量初始化
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
//结构体内存对齐
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














