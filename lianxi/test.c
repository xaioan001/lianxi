#include<stdio.h>
//位段
//位段的声明和结构体类似，有两个不同
//位段的成员必须是 int, unsigned int 或者signed int
//位段的成员名后边有一个冒号和一个数字
//例如

//位段--指的是二进制位
//struct S
//{
//	int a : 2;//a只需2个bit位可以表示四种状态
//	int b : 5;//b只需5个bit位可以表示32种状态
//	int c : 10;
//	int d : 30; 
//};//47bit--6*8个字节=48bit
//冒号后的数字表示元素需要表示的位数



//位段的内存分配方式
//1.位段成员可以是int usigned int signed int或者是char（属于整形家族）类型
//2.位段的空间上是按照需要以4个字节（int）或者1个字节（char）的方式来开辟
//3.位段涉及很多不确定因素，位段是补跨平台的，注重可移植的程序应该避免使用位段

//位段就是节省空间;
; struct S
{ 
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;

};
int main()
{
	struct S s;
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;
	printf("%d\n", sizeof(s));//8个字节
	return 0;
}












