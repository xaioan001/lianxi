
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
// 
// 
// 
////结构体内存对齐
//struct S1
//{
//	int b;
//	int a;
//	char c1;
//	char c2;
//};
///*考点如何计算？首先得掌握结构体的对齐规则
//1.第一个成员在与结构体变量偏移量为0的地址处
//2其他成员变量要对齐到某个数字
//（对齐数）的整数倍的地址处
//对齐数＝编译器默认的一个对齐数与该成员大小的较小值
//·VS中默以的值为8
//3.结构体总大小为最大对齐数
//（每个成员变量都有一个对齐数）的整数倍。
//4.如果嵌套了结构体的情况，
//嵌套的结构体对齐到自己的最大对齐数的整数倍处，
//结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍，
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
//总体来说
//结构体的内存对齐是拿空间来换取时间的做法
//默认对齐数设置
////设置默认对齐数为4 
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
// //取消默认对齐数
//int main()
//{
//	struct S  s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}
//    #pragam 可以修改默认对齐数
#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	//offsetof();计算偏移量
//	//offsetof();  是宏
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}



//结构体传参
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













