#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int n=1;
    printf("请输入四位以内的数:\n");
    scanf("%d",&x);
    if(x>999)
    {
        n=4;
    }
    else if(x>99)
    {
        n=3;
    }
    else if(x>9)
    {
        n=2;
    }
    else
    {
        n=1;
    }
    printf("%d",n);
    return 0;
}
