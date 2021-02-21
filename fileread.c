#include<stdio.h>
int main()
{
FILE *fp;
fp=open("data","r");
if (fp==NULL)
{
printf("error");
return;
}
fgets("welcome to linux",fp);
fclose(fp);
}

