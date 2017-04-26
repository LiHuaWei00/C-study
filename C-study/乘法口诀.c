#include<stdio.h>
#include<stdlib.h>


void main()
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%d",j,i,i*j);
		
		
		}
		printf("\n");
	
	}


	system("pause");

}