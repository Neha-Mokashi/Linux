#include <stdio.h>
int main()
{
   int ar[2][3];
   int *arc[2];
   
   int ar1[3];
   int ar2[3];
   

	int i,j;
   arc[0]=ar1;
   arc[1]=ar2;
   
   ar1[0]=12;
   ar1[1]=13;
   ar1[2]=14;
   
   ar2[0]=15;
   ar2[1]=16;
   ar2[2]=17;
   printf("helo world\n");
   
   for( i=0;i<2;i++)
   {
       for( j=0;j<3;j++)
       {
           printf("%d\t",arc[i][j]);
       }
       printf("\n");
   }
    return 0;
    
}
