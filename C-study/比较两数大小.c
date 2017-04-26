/*
两数的四项运算
*/
#include <stdio.h>
#include <conio.h>
int main(void)
{
	int x,y;
	int m;
	printf("Please input x and y\n");
	scanf("%d %d",&x,&y);

	printf("x与y的和为%d 差为%d 积为%d 商为%d",x+y,x-y,x*y,x/y);

    return 0;
}
