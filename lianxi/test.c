#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int is_left_move(char* str1, char* str2)
//{
//	//1.在str1后边追加一个str1字符串
//	//strcat   自己给自己追加时候不能用strcat函数
//	// strncat
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	strncat(str1,str1,6);//abcdefabcdef
//	if (len1 != len2)
//		return 0;
//	//strstr函数时一个找子串
//	//2.判断str2指向的字符串是否时str1指向的字符串的子串
//	char*ret=strstr(str1, str2);//在str1中找str2子串
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//    int ret=is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}
//
///杨氏矩阵
//题目内容
// 有一个数字矩阵，矩阵的每一行从左到右是递增的，矩阵从上到下是递增的
// 要求复杂度小于O（n）
//1 2 3
//2 3 4
//3 4 5 
//
int FindNum(int arr[3][3], int k, int*px, int*py)
{
	int x = 0;
	int y = *py - 1;
	while (x <=*px - 1 && y >= 0)
	{
		if (arr[x][y] > k)//右上角元素比较
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}

	}
	//找不到
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	//返回型参数
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("找到了\n");
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}




















