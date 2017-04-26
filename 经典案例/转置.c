#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[2][3],brr[3][2];
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            brr[j][i]=arr[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
