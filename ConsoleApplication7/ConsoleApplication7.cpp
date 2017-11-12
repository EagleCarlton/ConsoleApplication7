// ConsoleApplication7.cpp : 定义控制台应用程序的入口点。
//顺序搜索

#include "stdafx.h"
#include "stdio.h"
int sequential_search(const int p[], int n, int key);
int main()
{
	int a[10], i;
	printf("input 10 integers:\n");
	for (i = 0; i < 10; ++i)
		scanf_s("%d", &a[i]);
	printf("%d\n", sequential_search(a, 10, 9));
    return 0;
}
int sequential_search(const int p[], int n, int key)
{
	int i;
	for (i = 0; i < n; ++i)
		if (key == p[i])
			break;
	return i < n ? i : -1;
}

