#include<stdio.h>
#include<stdlib.h>


void main()
{
	int x;
	int y=67;
	do{
	printf("���������²�����֣�\n");
	scanf("%d",&x);
	if(x<y)
	{
		printf("С��\n");
	
	}
	else if(x==y)
	{
		printf("���¶��ˣ�");
	}
	else{
		printf("����\n");
	}
	y++;
	}while(x!=y);
	
	system("pause");
}