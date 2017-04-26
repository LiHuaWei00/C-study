任务：放鞭炮

问题描述：

过年了，刘备、关羽、张飞一起放鞭炮，
每一个人一支香，每人初始都为N个鞭炮（散），
刘备每一秒燃放一个，关羽每两秒燃放一个，
张飞每三秒燃放一个，
在不考虑燃烧时间跟安全的情况下，鞭炮即点即炸，开始的时候大家一起开始放鞭炮，
问大家都放完时，一共可以听到多少次响声？一共花了多长时间？
/**
 * 说明： 任务09_3放鞭炮
 * 姓名：李华伟
 * 学号：2015015156
 * 班级：1班
 * 日期：2016/06/05

**/#include<stdio.h>
#include<stdlib.h>


int renshu(int n)
{
	int i,j=1,k=1;
	int count;
	int arr[20],brr[20];
	
	if(1==n)
	{
		printf("time为1，count为1");
	}
	count=n;
	for(i=0;i<n-1;i++)
	{
		j+=2;
		k+=3;
		arr[i]=j;
		brr[i]=k;
	}
	for(i=0;i<n-1;i++)
	{
		if(arr[i]>n)
		{
			count++;
		}
		if(brr[i]>n)
		{
			count++;
		}
	}
	for(i=0;i<n-1;i++)
	{
		if(arr[i+1]==brr[i])
		{
			count-=1;
		}
	}
	printf("count=%d\n",count);
	printf("time=%d\n",k);
	return count;
	return k;
}

void main()
{
	int a;
	scanf("%d",&a);
	renshu(a);
	system("pause");

}