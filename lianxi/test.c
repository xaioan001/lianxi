#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int is_left_move(char* str1, char* str2)
//{
//	//1.��str1���׷��һ��str1�ַ���
//	//strcat   �Լ����Լ�׷��ʱ������strcat����
//	// strncat
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	strncat(str1,str1,6);//abcdefabcdef
//	if (len1 != len2)
//		return 0;
//	//strstr����ʱһ�����Ӵ�
//	//2.�ж�str2ָ����ַ����Ƿ�ʱstr1ָ����ַ������Ӵ�
//	char*ret=strstr(str1, str2);//��str1����str2�Ӵ�
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
///���Ͼ���
//��Ŀ����
// ��һ�����־��󣬾����ÿһ�д������ǵ����ģ�������ϵ����ǵ�����
// Ҫ���Ӷ�С��O��n��
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
		if (arr[x][y] > k)//���Ͻ�Ԫ�رȽ�
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
	//�Ҳ���
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	//�����Ͳ���
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("�ҵ���\n");
	}
	else
	{
		printf("�Ҳ���\n");
	}
	return 0;
}




















