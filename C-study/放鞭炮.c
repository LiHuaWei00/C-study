���񣺷ű���

����������

�����ˣ������������ŷ�һ��ű��ڣ�
ÿһ����һ֧�㣬ÿ�˳�ʼ��ΪN�����ڣ�ɢ����
����ÿһ��ȼ��һ��������ÿ����ȼ��һ����
�ŷ�ÿ����ȼ��һ����
�ڲ�����ȼ��ʱ�����ȫ������£����ڼ��㼴ը����ʼ��ʱ����һ��ʼ�ű��ڣ�
�ʴ�Ҷ�����ʱ��һ�������������ٴ�������һ�����˶೤ʱ�䣿
/**
 * ˵���� ����09_3�ű���
 * �������ΰ
 * ѧ�ţ�2015015156
 * �༶��1��
 * ���ڣ�2016/06/05

**/#include<stdio.h>
#include<stdlib.h>


int renshu(int n)
{
	int i,j=1,k=1;
	int count;
	int arr[20],brr[20];
	
	if(1==n)
	{
		printf("timeΪ1��countΪ1");
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