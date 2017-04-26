#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[5]={2,4,5,6,8};
    int i,n,m,x,mid;
    scanf("%d",&i);
    n=0;m=4;

    while(n<=m)
    {
        mid=(n+m)/2;
        if(i==t[mid])
        {
            printf("含有此数字");
            break;
        }
        else if(i>t[mid])
        {
           n=mid+1;
        }
        else
        {
            m=mid-1;
        }
    }
    if(n>m)
    {
        printf("没有此数");
    }
    return 0;
}
