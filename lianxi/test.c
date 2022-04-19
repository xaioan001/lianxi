#include<stdio.h>
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2); //ptr1[-1]==*(ptr1+(-1))==*(ptr1-1)
//	return 0;               //想内存布局  小端存储方式 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00     
//}                                                   //*ptr2     从这开始小端模式访问  即（00 00 00 02） %x打印即200000                                    
//int main()
//{
//	int a[3][2] = {(0,1),(2,3),(4,5)};
//	int* p;    //初始化圆括号表达式 在数组布局中放最后一个数字即1，3，5 
//	p = a[0];
//	printf("%d", p[0]);//p[0]表示*(p+0)
//	return 0;
//}
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;//a的类型是int（*）[4]  
//	//      p的类型是int（*）[5]   只是把a的地址赋值给p
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//              p[4][2]==*(*(p+4)+2)
//	
//	return 0;
//
//}
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));//二维数组首元素地址相当于第一行
//	      aa=aa[1]        *（aa+1)==*(a[1])
// printf("%d,%d\n", *(ptr1-1), *(ptr2-1));
//	//ptr1是整形指针 ptr1-1移动一个整形
//	return 0;
//}
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0; 
//}
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//++cpp指向c+2，*++cpp解引用拿到c+2内容即，c+2内容即是p的地址，
	//                       **++cpp拿到p的地址，再进行打印 
	printf("%s\n", *--* ++cpp + 3);//++级别高 ++cpp指向c+1  *++cpp解引用拿到c+1内容
	//                              -- *++cpp   --即c+1变为c，而c指向数组c,即E的地址，+3即从E往后数3个数指向E  打印ER
	printf("%s\n", *cpp[-2] + 3);//*cpp[-2]+3       ST
	//                              **(cpp+(-2))+3
	 //                              **(cpp-2)+3 
	printf("%s\n", cpp[-1][-1] + 1);//cpp[-1][-1]+1
	                             //*(  *(cpp-1)-1    )+1
	 //            cpp指向c+3            cpp-1 指向c+2  ，c+2指向c中char*[2],
	//                                   *(cpp-1)-1   指向char*[2]内容NEW首元素N地址
	//                                     *（*（cpp-1）-1)+1  即指向NEW中的E  打印即是EW
	//
	///
	//
	//
	//
	//
	//
	//






















}


























