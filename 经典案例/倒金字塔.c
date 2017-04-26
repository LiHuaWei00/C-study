/*
  * 说明：任务05_3 打印宝石
  * 姓名：李华伟
  * 学号：2015015156
  * 班级：1班
  * 日期：2016/04/07
  */
#include<stdio.h>
int main()
{
    int i,j,k,n=3,m;

        for(i=1;i<=4;i++){
            for(j=1;j<=n;j++){
                printf(" ");

            }
            n--;          
            for(k=1;k<=(2*i-1);k++){
                printf("*");
            }
            printf("\n");

        }
        for(i=1;i<=3;i++){
            for(j=1;j<=i;j++){
                printf(" ");
            }
            m=7-2*i;
            for(k=1;k<=m;k++){
                printf("*");
            }

            printf("\n");
        }


    return 0;
}