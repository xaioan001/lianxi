#include<stdio.h>
//int main()
//{
//	int a[5] = { 5,4,3,2,1 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d ,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}
//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	//aa是个数组，aa+1 是第二行首元素地址，*（aa+1）==aa[1]表示5这个元素地址，再强制类型转换为int*
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//
//}


//题目内容：
//实现一个函数，可以左旋转字符串中的k个字符。
//例如：
//ABCD左旋转一个字符得到BCDA
//ABCD钻旋转两个字符得到CDAB

//旋转字符串
// 
//
//暴力求解法
#include<string.h>
#include<assert.h>
//void left_move(char* arr[],int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋转一个字符
//		// 1
//		char tmp = *arr;
//		//2
//
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3
//		*(arr + len - 1) = tmp;
//	}
//}
//三步翻转法
// abcdef
//分开 ab cdef
//再各自翻转 ba fedc
//合起来 bafedc
//再翻转 cdefab
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char*arr,int k)
//{  
//	//k表示传过来逆序几位
//	int len = strlen;
//	assert(arr);
//	assert(k <= len);
//	reverse(arr,arr+k-1);//逆序左边   reverse是一个逆序函数
//	reverse(arr+k,arr+len-1);//逆序右边
//	reverse(arr,arr+len-1);//逆序整体
//}
//int main()
//{ 
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}
//
int left_move(char* s1, char* s2)
{
	int len = strlen(s1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		left_move(s1, 1);
		int ret=strcmp(s1, s2);
		if (ret == 0)
			return;
	}
	return 0;
}
int main()
{
	char* arr1 = "abcdef";
	char* arr2 = "cdefad";
	int ret = left_move(arr1, arr2);
	if (ret == 1)
		printf("yes\n");
	else
		printf("NO\n");
	return 0;
}























