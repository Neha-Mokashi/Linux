#include <stdio.h>
#include <string.h>
struct node
{
int data;
char name[20];
};
int main()
{
FILE *fp;
struct node n1;
n1.data=222;
fp=fopen("binfile","wb");
if(fp==NULL)
{
printf("file error");
return;
}
strcpy(n1.name,"neha");
fwrite(&n1,sizeof(n1),1,fp);
fclose(fp);
}
