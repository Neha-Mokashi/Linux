#include <stdio.h>
#include<stdlib.h>
#define max 5
int top=-1;
int s[10];
void push()
{ 



    if( top==max-1)
    { 
        printf("\nTHE STACK IS FULL \n");
    } else
    { 
        int ele;
 
    printf("\nenter the element: ");
    scanf("%d", &ele);
        ++top;
        s[top]=ele;


    } 


} 
 
int pop()
{ 
    if(top==-1)
    printf("THE STACK IS EMPTY\n");

    else{ 
        int delement= s[top];
        printf("\nthe popped elements is :%d\n", delement);
        --top;

    return delement;    
    } 


} 
void printstack()
{ 
<<<<<<< HEAD

if(top==-1){
	printf("STACK IS EMPTY! can't print data");
}
else
{
	int i;
    for( i=top;i>=0; i--)
    printf("%d ", s[i]);
}
} 
=======
    if(top==-1)
    {
        printf("STACK IS EMPTY! can't print\n");
    }    
else{
    
    int i;
    for( i=top;i>=0; i--)
    printf("%d ", s[i]);

   } 
}
>>>>>>> 8664703823bc148218bd1a5722114d71e4073257
 
 
int main()
{ 
    int ch;
 
    while(1){ 
            printf("\nenter your choice:\n1) push \n2) pop \n3) print \n 4)exit ");
    scanf("%d", &ch);
    switch(ch)
    { 

        case 1: push(); break;
        case 2: pop(); break;
        case 3: printstack(); break;
        case 4: exit(2);
        default: printf("\nwrong choice\n");

    } 
    } 
 
    return 0;
}
