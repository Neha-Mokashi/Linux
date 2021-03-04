#include <stdio.h>
struct node
{
    int data;
    struct node *link;
};

typedef struct node ll;
int main()
{
    ll n1,n2,n3;
    n1.data=10;
    n2.data=20;
    n3.data=30;
    
    n1.link=&n2;
    n2.link=&n3;
    n3.link=NULL;
    
    printf("[%d %u]-->\t",n1.data,n1.link);
    printf("[%d %u]-->\t",n2.data,n2.link);
    printf("[%d %u]-->\t",n3.data,n3.link);
    
    
    return 0;
}

