#include<stdio.h>
int main()
{
FILE *fp;
fp = fopen("data","w");
if(fp==NULL)
{
printf("file error");
return;
}
fputs("welcome to linux files",fp);
fclose(fp);

return 0;

}
