#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//���ַ�������
//strlen
//����������
//�ݹ�
//ָ���ָ��
//size_t==unsigned int 
// size_t���᷵�ظ���  int�᷵�ظ���
//strlen ����������size_t
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = strlen("ancdef");
//	////����ʾ��
//	//char arr[] = { 'a','b','c','d','e','f' };
// 	//int len = strlen(arr);
//	printf("%d\n", len);
//}
//strcpy  �ַ�������
//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL && src != NULL);
//	char* ret = dest;
//	//����srcָ���ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//		//*dest++= *src++;
//		//����bit
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//	//*dest = *src;//����'\0'
//
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//	//����ʾ��
//	//char arr[] = { 'b','i','t' };û��\0λ��
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//
//}



//strcat�ַ���׷��
char* my_strcat(char*dest,const char*src)
{              //Ŀ�ĵ�     Դͷ
	
	char* ret = dest;
	assert(dest != NULL);
	assert(src);
	//�ҵ�Ŀ���ַ���'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//׷��
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);//Դͷ arr2������Ŀ�ĵ�arr1
	printf("%s\n", arr1);
}





















