/*
  * ˵��������05_3 ��ӡ��ʯ
  * �������ΰ
  * ѧ�ţ�2015015156
  * �༶��1��
  * ���ڣ�2016/04/07
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