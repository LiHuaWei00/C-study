#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a[2][3]={1,2,3,4,5,6},b[3][3]={4,5,6,1,2,3,1,0,1},sum[2][3];
    int z;
     for(i=0;i<2;i++){
        for(j=0;j<3;j++){
                int c=0;
            for(z=0;z<3;z++){
                    c=c+a[i][z]*b[z][j];
                    sum[i][j]=c;
                }
           }
    }
      for(i=0;i<2;i++){
        for(j=0;j<3;j++){
          printf("%3d",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

