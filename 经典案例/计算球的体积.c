/*
    ����������
*/
#include<stdio.h>
#include<math.h>
#define PI 3.1415927
int main(void)
{
    float r;//����뾶
    float v;//�������
    while(scanf("%f",&r)!=EOF)
    {
        v=PI*r*r*r*4/3;
        printf("������Ϊ%.2f\n",v);
    }
    return 0;
}
