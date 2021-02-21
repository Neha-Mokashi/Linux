#include<stdio.h>
int main()
{
FILE *fp;
fp = fopen("fpfile","w");
if(fp==NULL)
{
printf("file error");
return;
}
//fputs("welcome to linux files",fp);
fprintf(fp,"written using printf");
fclose(fp);

return 0;

}
