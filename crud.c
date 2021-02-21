#include<stdio.h>
#include<stdlib.h>


#include<string.h>
void read();
void delete();
void create();
void update();
struct node
{
int data;
char name[10];
};
typedef struct node n;
n e1,e2,e3,e4;int size=4,flag=0;
void menu()
{
printf("1 create \n2 read \n3 update \n4 delete \n5 exit\n");
}
int main()
{
FILE *fp;
int ch;
while(1)
{
menu();
printf("Enter the Choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: create(); break;
case 2: read(); break;
case 3: update(); break;
//case 4: delete(); break;
case 5: exit(1);
Default: printf("wrong choice\n");
}
}
}
void create()
{
FILE *fp;
fp = fopen("emprecords", "wb");
if(fp==NULL)
{
printf("file error\n");
return;
}
e1.data=10;
e2.data=20;
e3.data=30;
e4.data=40;
strcpy(e1.name,"neha");

strcpy(e2.name,"darshu");
strcpy(e3.name,"sagar");
strcpy(e4.name,"kunya");
fwrite(&e1,1,sizeof(e1),fp);

fwrite(&e2,1,sizeof(e2),fp);
fwrite(&e3,1,sizeof(e3),fp);
fwrite(&e4,1,sizeof(e4),fp);
printf("data recorded\n");
fclose(fp);
}

void read()
{
FILE *fp;
fp=fopen("emprecords","rb");
fread(&e1,sizeof(e1),1,fp);
printf("data=%d name=%s\n", e1.data,e1.name);

fread(&e2,sizeof(e2),1,fp);
printf("data=%d name=%s\n", e2.data,e2.name);

fread(&e3,sizeof(e3),1,fp);
printf("data=%d name=%s\n", e3.data,e3.name);

fread(&e4,sizeof(e4),1,fp);
printf("data=%d name=%s\n", e4.data,e4.name);



fclose(fp);
}

void update()
{
FILE *fp;
fp=fopen("emprecords","w");
int data;
printf("enter the data to be update\n");
scanf("%d",&data);
int len=ftell(fp);
//for(int i=1;i<=4; i++)
//{
char name[100];
if(data==e1.data || data==e2.data || data==e3.data || data==e4.data)
{
	printf("enter the new name\n");
	scanf("%s",name);
	fwrite(name,sizeof(e1),1,fp);
	flag=1;
}
//}

if(flag==1)
{
printf("record upated\n");
}
else
{
printf("record not updated\n");
}

fclose(fp);

}
    
