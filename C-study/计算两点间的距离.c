/*
    计算两点间的距离
*/
#include<stdio.h>
#include<math.h>
int main(void)
{
    float x1,x2;
    float y1,y2;
    float x3,y3;
    float t;
    while(scanf("%f %f %f %f",&x1,&y1,&x2,&y2)!=EOF)
    {
        x3=x1-x2;
        y3=y1-y2;
        t=pow(x3,2)+pow(y3,2);//求幂函数
        printf("%.2f",sqrt(t));// 开平方根
    }
    return 0;
}