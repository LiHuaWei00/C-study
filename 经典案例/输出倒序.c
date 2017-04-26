#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int a=700;
    int f,s,t,sum;
    f=a/100;//f=1
    s=a%100/10;//s=3
    t=a%10;//t=7
    sum=f+s*10+t*100;
    printf("%d\n",sum);*/

    int a=700;
    int f,s,t,sum;
    f=a/100;
    s=a%100/10;
    t=a%10;
    sum=f+s*10+t*100;
    printf("%d",sum);
    return 0;
}
