/*
    计算球的体积
*/
#include<stdio.h>
#include<math.h>
#define PI 3.1415927
int main(void)
{
    float r;//输入半径
    float v;//定义体积
    while(scanf("%f",&r)!=EOF)
    {
        v=PI*r*r*r*4/3;
        printf("球的体积为%.2f\n",v);
    }
    return 0;
}
