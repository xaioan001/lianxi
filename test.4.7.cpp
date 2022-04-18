//int main()
//{
//    int i, j, k, n, a[100], maxs;
//    scanf_s("%d\n",&n);
//    for (i = 1; i <= n; i++)
//        scanf_s("%d", &a[i]);
//    maxs = a[1];
//    for (i = 1; i <= n; i++)/**< i和j为左右端点 */
//        for (j = i; j <= n; j++)
//        {
//            int sum = 0;
//            for (k = i; k <= j; k++)/**< 求子段[i,j]的和 */
//                sum += a[k];
//            maxs = (maxs>sum)?maxs:sum;
//        }
//    printf("%d\n", maxs);
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i, j, k, n, a;
//    int maxs, sum;
//    scanf_s("%d\n", &n);//字段长度
//    scanf_s("%d",&maxs);
//    sum = maxs;
//    for (i = 2; i <= n; i++) 
//    {
//        scanf_s("%d", &a);
//        sum = sum < 0 ? a: sum + a;
//        maxs = (maxs>sum)?maxs:sum;
//    }
//    if (maxs < 0)
//    {
//        maxs = 0;
//        printf("%d\n", maxs);
//    }
//    else
//    {
//        printf("%d\n", maxs);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i, j,k;
//    int M = 31;
//    int arr[] = { 11,13,24,7 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//        for (i = 0; i < sz - 2; i++)
//        {
//            for (j = i + 1; j < sz-1; j++)
//            {
//                for (k = j + 1; j < sz; k++)
//                {
//                    if (arr[i]+arr[j]==M)
//                    {
//                        printf("%d %d\n", arr[i], arr[j]);
//                        break;
//                    }
//                    else if (arr[i] + arr[k] == M)
//                    {
//                        printf("%d %d\n", arr[i], arr[k]);
//                        break;
//                    }
//                    else if(arr[k] + arr[j] == M)
//                    {
//                        printf("%d %d\n", arr[k], arr[j]);
//                        break;
//                    }
//                    else if(arr[i] + arr[j] + arr[k] == M)
//                    {
//                        printf("%d %d %d\n", arr[i], arr[j], arr[k]);
//                        break;
//                    }
//                }
//            }
//            break;
//        }
//        return 0;
//}
#include<stdio.h>
//int n, a[20] = { 0 };
//void Gray(int k, int t)
//{
//	if (!a[k - 2])
//		a[k] = t;
//	else a[k] = !t;
//	if (k == n + 2)//判断是否输出 
//	{
//		for (int i = 3; i <= n + 2; i++)//因为a[2]为辅助根节点，所以从a[3]开始输出 
//			printf("%d", a[i]);
//		printf("\n");
//		return;
//	}
//	Gray(k + 1, t);//递归调用上子树 
//	Gray(k + 1, !t);//递归调用下子树 
//}
//int main()
//{
//	scanf_s("%d", &n);
//	Gray(2, 0);
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16   a[0]相当于第一行作为数组名单独放在sizeof（）内，计算第一行数组大小
//	printf("%d\n", sizeof(a[0] + 1));//4 
//
//	printf("%d\n", sizeof(*(a[0] + 1)));//
//	//4  实质是对a[0]  解引用 地址大小还是4/8字节
//	printf("%d\n", sizeof(a + 1));// 4  a是二维数组的数组名，数组名没有sizeof（数组名），也没有&（数组名），所以a是首元素地址
//	//而二维数组看成一维数组，二维数组的首元素是他的第一行，a就是第一行（首元素）地址
//
//	printf("%d\n", sizeof(*(a + 1)));//相当于计算第二行数组大小
//	printf("%d\n", sizeof(&a[0] + 1));//4  第二行地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16  第二行地址大小
//	printf("%d\n", sizeof(*a));//16  *a是第一行 第一行地址 *a就是第一行，sizeof（*a）就是计算第一行大小
//	printf("%d\n", sizeof(a[3]));//16   根据类型计算大小
//	
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n",(unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}






















































