#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,flag;
    int a[3][3]={1,9,1,2,1,3,1,3,1};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
            if(a[i][j]!=a[j][i])
            {
                printf("���Ǿ���");
                /*flag=1;
                break;*/
                return;
            }
        }
        /*if(1==flag)
        {
            printf("���Ǿ���");
            break;
        }*/
    }
    printf("�Ǿ���");
    return 0;
}
