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
//	//aa�Ǹ����飬aa+1 �ǵڶ�����Ԫ�ص�ַ��*��aa+1��==aa[1]��ʾ5���Ԫ�ص�ַ����ǿ������ת��Ϊint*
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//
//}


//��Ŀ���ݣ�
//ʵ��һ����������������ת�ַ����е�k���ַ���
//���磺
//ABCD����תһ���ַ��õ�BCDA
//ABCD����ת�����ַ��õ�CDAB

//��ת�ַ���
// 
//
//������ⷨ
#include<string.h>
#include<assert.h>
//void left_move(char* arr[],int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//����תһ���ַ�
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
//������ת��
// abcdef
//�ֿ� ab cdef
//�ٸ��Է�ת ba fedc
//������ bafedc
//�ٷ�ת cdefab
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
//	//k��ʾ����������λ
//	int len = strlen;
//	assert(arr);
//	assert(k <= len);
//	reverse(arr,arr+k-1);//�������   reverse��һ��������
//	reverse(arr+k,arr+len-1);//�����ұ�
//	reverse(arr,arr+len-1);//��������
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























