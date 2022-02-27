#include<stdio.h>
#include<stdlib.h>

void main()
{
	/*int temp = 0;//求最大值
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	for(int i=0;i<10-1;i++)
		if (a[i] < a[i + 1])
		{
			 temp = a[i + 1];
		}
		printf("%d", temp);
		*/

	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };//冒泡排序法，精髓在于俩俩比，厉害的和下一个比，每轮比出一个最大的
	for (int i = 0; i < 10-1; i++)
	{
		for (int j =0; j < 10-1-i; j++)
		{
			if (a[j] < a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	system("pause");
}