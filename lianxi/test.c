#include<stdio.h>
//int strncmp(const char* string1, const char* string2, size_t count);
//count  �ֽڸ���
#include<string.h>
#include<assert.h>
//int main()
//{
//	 //strncap  �ַ����Ƚ�
//	const char* p1 = "abzerf";//��const  �ǿ��ǳ����ַ����������ǲ��ܱ��޸ĵ�
//	const char* p2 = "abcqwer";
//	//int ret=strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 4);//3��ʾp1��p2��ֻ�Ƚ�ǰ�����ַ���
//	printf("%d\n", ret);
//	return 0;
//}
///strstr  �������ַ���
//NULL-��ָ��
//   NUL/Null--  \0
char*my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
    const char* s1 = p1;
	const char* s2 = p2;
	char* cur =(char*) p1;
	if (*p2 == '\0')//���p2Ϊ���ַ����Ļ����򷵻�\0
	{
		return (char*)p1;
	}
	while (*cur)//����*cur��ʾ*cur�����ú��Ƿ���\0
	{
		s1 = cur;
		s2 = (char*)p2;
		while( (*s1!='\0')&&(*s2 != '\0') && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cur;//�ҵ��Ӵ�
		}
		cur++;
	}
	return NULL;//�Ҳ����Ӵ�
}
int main()
{
	char* p1 = "abcdefghi";
	char* p2 = "def";
	char*ret=my_strstr(p1, p2);//��p1����p2���ַ�����������ڣ�����ӡp2��Ѱ��Ԫ�ؼ������ַ�
	if (ret == NULL)
	{
		printf("�Ӵ�������");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}



















