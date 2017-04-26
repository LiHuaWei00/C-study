/*
    º¯Êý½»»»
*/
#include <stdio.h>
void swap(int x,int y);
int main(void)
{
    int a=3,b=4;
    printf("%d%d\n",a,b);
    swap(a,b);
   // printf("%d%d",a,b);
    return 0;
}
/*void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}*/
void swap(int x,int y)
{
    int t=x;
    x=y;
    y=t;
    printf("%d%d",x,y);
}

