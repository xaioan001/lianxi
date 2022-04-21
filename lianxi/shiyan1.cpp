//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//const int maxn = 1000 + 10;
//int n;
//struct node {
//	int id;
//	int cost;
//	int deadline;
//} works[maxn];
//bool cmp(node a, node b)
//{
//	if (a.deadline != b.deadline)
//		return a.deadline < b.deadline;
//	else
//		return a.cost < b.cost;
//}
//int dp[maxn][maxn];
//int main()
//{
//	while (scanf_s("%d", &n)!= EOF)
//	{
//		for (int i = 0; i < n; i++)
//			scanf_s("%d", &works[i].cost);
//		for (int i = 0; i < n; i++)
//			scanf_s("%d", &works[i].deadline), works[i].id = i + 1;
//		sort(works, works + n, cmp);
//		int f_min = 0;
//		int time = 0;
//		for (int i = 0; i < n; i++)
//		{
//			f_min = max(works[i].cost + time - works[i].deadline, f_min);
//			time += works[i].cost;
//		}
//		printf("最大延迟:\n");
//		printf("%d\n", f_min);
//		printf("完成任务顺序\n");
//		for (int i = 0; i < n; i++)
//			cout <<  works[i].id  <<  "";
//		    cout << endl;
//
//
//
//
//	}
//	return 0;
//
//}
// a选手说：b第一我三
// b说 我三 e四
// c说 我一 d二
// d说 c最后 我三
// e说 我四 a一
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e==120)
//							printf("a= %d b =%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p=(int*)malloc(10 * sizeof(int)); 
	//malloc函数可以向内存申请空间   
	//向内存申请10个整形的内存大小
	//使用空间
	//释放空间
	//free(p)
}
