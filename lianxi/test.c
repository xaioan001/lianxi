#include<stdio.h>
//int strncmp(const char* string1, const char* string2, size_t count);
//count  字节个数
#include<string.h>
#include<assert.h>
//int main()
//{
//	 //strncap  字符串比较
//	const char* p1 = "abzerf";//加const  是考虑常量字符串，本身是不能被修改的
//	const char* p2 = "abcqwer";
//	//int ret=strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 4);//3表示p1和p2中只比较前三个字符串
//	printf("%d\n", ret);
//	return 0;
//}
///strstr  查找子字符串
//NULL-空指针
//   NUL/Null--  \0
char*my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
    const char* s1 = p1;
	const char* s2 = p2;
	char* cur =(char*) p1;
	if (*p2 == '\0')//如果p2为空字符串的话，则返回\0
	{
		return (char*)p1;
	}
	while (*cur)//这里*cur表示*cur解引用后是否是\0
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
			return cur;//找到子串
		}
		cur++;
	}
	return NULL;//找不到子串
}
int main()
{
	char* p1 = "abcdefghi";
	char* p2 = "def";
	char*ret=my_strstr(p1, p2);//在p1中找p2的字符串，如果存在，则会打印p2中寻找元素及后面字符
	if (ret == NULL)
	{
		printf("子串不存在");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}



















