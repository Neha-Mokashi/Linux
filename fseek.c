



#include<stdio.h>
int main()
{
FILE *fp;
char c;
fp = fopen("abfile","r");
if(fp == NULL)
{ 
printf("file error");
return;
}
 //c = fgetc(fp);
//printf("%c ",c);
//fseek(fp,-1,SEEK_CUR);
//c = fgetc(fp);
//printf("%c ",c);
//c = fgetc(fp);
//printf("%c ",c);
//fseek(fp,-1,SEEK_CUR);
//c = fgetc(fp);
//printf("%c ",c);
//fseek(fp,0,SEEK_END);
//int len=ftell(fp);
//printf("\nlen=%d",len);
printf("\n");
int i;
//for(i=28;i>=1;i++)
for(i=1;i<=28;i++)
{
fseek(fp,-(i),SEEK_END);
c=fgetc(fp);
printf(" %c",c);

}

fclose(fp);

}
