#include<stdio.h>
#include<stdlib.h>


void main()
{
	int x;
	int y=67;
	do{
	printf("请输入您猜测的数字：\n");
	scanf("%d",&x);
	if(x<y)
	{
		printf("小了\n");
	
	}
	else if(x==y)
	{
		printf("您猜对了！");
	}
	else{
		printf("大了\n");
	}
	y++;
	}while(x!=y);
	
	system("pause");
}