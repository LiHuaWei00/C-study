#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int j,x,y,z;
    int sum=0;
    while(scanf("%d%/%d/%d",&x,&y,&z)!=EOF)
    {
      for(j=0;(j<y-1);j++)
        {
            sum=sum+arr[j];
        }
        if(x%400==0||((x%100!=0)&&(x%4==0))) //闰年400 能被4除但不能被100
        {
            if(y>2)
            {
                sum=sum+z+1;
                printf("%d\n",sum);
            }else{
                printf("%d\n",sum+z);
            }
        }else{
            printf("%d\n",sum+z);
        }
        sum=0;
    }
    return 0;
}
