#include <stdio.h>

int main(void)
{
	int i,n,j,m,k,x,y,z;
	 scanf("%d",&z);
	 x=1;n=z;
	for(y=0;y<=z;y++){
	 for(k=1;k<=n;k++){
		 for(j=1;j<n;j++){
			printf(" ");
		 }
		 for(m=1;m<=x;m++){
			printf("*");
		 }
		 printf("\n");
		 n--;x=x+2;
	 
	 }}
	return 0;
}