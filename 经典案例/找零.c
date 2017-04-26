#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,price=23;
    printf("请输入您的金额");
    scanf("%d",&x);
    y=x-price;

    printf("找您%d元",y);
    return 0;
}
