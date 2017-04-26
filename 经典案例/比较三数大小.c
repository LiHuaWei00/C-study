/*
    比较三数大小
*/
#include <stdio.h>
#include <conio.h>
int main(void)
{

    int x,y,z;
    int m1,m2,m3;
    printf("plese input x,y,z\n");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y)
    {  
        m1=x;
        m2=y;
        m3=z;
        if(z>x)
        {
            m1=z;
            m2=x;
            m3=y;
        }
        else
        {
            if(z>y)
            {
                m2=z;
                m3=y;
            }
        }
   }
    else
    {
        m1=y;
        m2=x;
        m3=z;
        if(z>y)
        {
            m1=z;
            m2=y;
            m3=x;
        }
        else
        {
            if(z>x)
            {
                m2=z;
                m3=x;
            }
        }
    }
    printf("三数的大小顺序为%d %d %d",m1,m2,m3);
    return 0;
}
--------------------------------------------------------------------------------------------
# include <stdio.h>
void main()
{
	int max(int x,int y,int z);
	int a,b,c,d;
	scanf("%d,%d,%d",&a,&b,&c);
	d=max(a,b,c);
	printf("max = %d\n",d);
}
int max(int x,int y,int z)
{
	int m,int n;
	if(x>y) m = x;
	else m = y;
	if(m>z) n = m;
	else n = z;
	return(n);
}
------------------------------------------------------------------------------
# include <stdio.h>
int main()
{
char a,b,c;
char t;
scanf("%c%c%c",&a,&b,&c);
if(a>b)
{
t=a;
a=b;
b=t;
}
if(c>b)
{
printf("%c%c%c",a,b,c);
}
else if(c>a)
{
printf("%c%c%c",a,c,b);
}
else
{
printf("%c%c%c",c,a,b);
}
return 0;//先比较两个数的大小(两者交换顺序使较小的那个数在前面)，然后用第三个数去与两数中较大的那个数去比较
}
