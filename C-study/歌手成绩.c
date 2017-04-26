#include <stdio.h>

int main(void)
{
	float a,b,c,d,e,max,min,sum;
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	if(a<b){
	min=a;
	max=b;
	}else{
	min=b;
	max=a;
	}
	if (c>max)
    {
        max=c;
    }
    if (d>max)
    {
        max=d;
    }
    if (e>max)
    {
        max=e;
    }
    if (c<min)
    {
        min=c;
    }
    if (d<min)
    {
        min=d;
    }
    if (e<min)
    {
        min=e;
    }
    sum=a+b+c+d+e-max-min;
    printf("Æ½¾ù·Ö=%.1f\n",sum/3);
    return 0;

}