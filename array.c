#include <stdio.h>
#include<stdlib.h>
//no of rows = size of vertical column
int main()
{
    int r,c,i,j;
   int **arc;  //int **arc or int arcp[][];
   printf("enter the rows and columns : ");
   scanf("%d%d", &r,&c);
  
    arc= (int *)malloc(sizeof(int)*r); //rows 
    
   for( i=0;i<r; i++) //run row times and get cols  each time
    arc[i]=(int *)malloc(sizeof(int)*c);




    int number=1;
   for( i=0;i<r;i++)
   {
       for( j=0;j<c;j++)
       {
           arc[i][j]= number;
           number++;
       }
       
   }


    printf("\nArray\n");
   for(i=0;i<r;i++)
   {
       for( j=0;j<c;j++)
       {
           printf("%d\t",arc[i][j]);
       }
       printf("\n");
   }


    return 0;
} 
