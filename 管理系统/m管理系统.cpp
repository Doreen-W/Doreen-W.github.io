#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct student 
{
	char name[20];
	char cla[20];
	char id[20];	
	struct student *next; 
};

struct denglu
{
	char username[20];
	char password[20];
	struct denglu *next1;
};

struct student *head=(struct student *)malloc(sizeof(struct student)); 
struct student *temp;
struct denglu *temp1; 
struct denglu *head1=(struct  denglu*)malloc(sizeof(struct denglu));

//声明函数
void read();     
void read1();
void write();
void write1(); 
void denglu();
void zhuce();
void del(); 
void search(); 
void modify();
void create();
void leave();

//菜单1 
 void List1()
{
	printf("****************************************\n");
	printf("*********学生证管理系统主菜单***********\n");
	printf("****************************************\n");
	printf("*********1.注册         2.登录**********\n");
	printf("*********0.退出系统           **********\n");
		int input = 0;
		printf("请选择:");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				zhuce();	
				break;
			case 2:
				denglu();
				break;
			case 0:
				leave();
				printf("退出系统\n");
				break;
			default:
				printf("选择错误\n");
				break;			 			
		}
	while(input);	
} 
void choose(struct student *temp)
 {
 	int n = 0;
 	printf("请选择需修改的项目：");
 	printf("1.学生姓名");
 	printf("2.学生学号");
 	printf("3.学生专业班级\n");
 	scanf("%d",&n);
 	switch(n)
 	{
		case 1:
	 		printf("请输入修改后的姓名：");
	 		scanf("%s",temp->name);
	 		break; 
	 	case 2:
	 		printf("请输入修改后的学号：");
		 	scanf("%s",temp->id);
		 	break;
		case 3:
			printf("请输入修改后的专业班级：");
			scanf("%s",temp->cla);
			break;
	}		 	
 }

//登录菜单2
void List2()
{
	int n = 0;
	printf("****************************************\n");
	printf("***************请选择功能***************\n");
	printf("*************1.学生信息查询*************\n");
	printf("***************2.修改信息***************\n");
	printf("***************3.删除信息***************\n");
	printf("**************4.返回主菜单**************\n");
	printf("*************5.学生信息录入*************\n"); 
	printf("***************0.退出系统***************\n"); 
	scanf("%d",&n);
	system("cls");
	switch(n)
	{
		case 1:
			search();
			system("pause");
			system("cls");
			List2(); 
			break;
		case 2:
			modify();
			printf("修改成功!");
			system("pause");
			system("cls");
			List2(); 
			break;
		case 3:
			del();
			printf("删除成功!");
			system("pause");
			system("cls");
			List2(); 
			break;
		case 4:
			List1();
			break;
		case 5:
			create();
			printf("录入成功!");
			system("pause");
			system("cls");
			List2(); 
			break;	
		case 0:
			leave();
			break;				
	 } 
 } 
//注册函数 
void zhuce()
{
	char xuehao[20];
	char mima1[20];
	char mima2[20];
	char ch;
	struct denglu *add,*temp1;
	add =  (struct denglu*)malloc(sizeof(struct denglu));
	temp1 = head1;
	while(temp1->next1!=NULL)
	{
		temp1 = temp1->next1;
	}
	printf("请输入注册的学号:");
	scanf("%s",xuehao);
	
	do
	{
		printf("请输入密码:");
		scanf("%s",mima1);
		printf("请再次输入密码:");
		scanf("%s",mima2);
		
		if(strcmp(mima1,mima2) == 0)
		{
			strcpy(add->username,xuehao);
			strcpy(add->password,mima1);
			break;
		}
		else
		{
			printf("两次输入不一致，是否重新输入？");
			fflush(stdin);//清空输入缓冲区(std即standard,in即input) 
			ch = getchar();
		}
	}
	while(ch == 'y');
	temp1->next1 = add;
	add->next1 = NULL;
	printf("注册完成!"); 
	write1();                              
	system("pause");
	system("cls");
	List1();
}
//登录函数 
void denglu()
{
	char xuehao[20];
	char mima[20];
	printf("请输入学号:");
	scanf("%s",xuehao);
	printf("请输入密码:");
	scanf("%s",mima);
	temp1=head1->next1;
	while(temp1 != NULL)
	{ 
		if((strcmp(xuehao,temp1->username) == 0)&&(strcmp(mima,temp1->password) == 0))
		{
		 	printf("登录成功!");
			system("pause");
			system("cls");
			List2();
			break;  
		}
		if(temp1 == NULL)
		{
			printf("登录失败!");
			system("pause");
			system("cls");
			List1();
			break;
		}
		temp1 = temp1->next1;
	}
}
//退出系统 leave()
void leave()
{
	write();
	write1();
	printf("****************************************\n");
	printf("************退出学生管理系统************\n");
	printf("**************欢迎下次使用**************\n"); 
	printf("****************************************\n");
	exit(0);
 } 

 //查询函数
 void search()
 {
 	struct student *temp;
	int i=0;
	char id[20];
	temp=head->next;
	printf("请输入你要查找的人的学号：");
	scanf("%s",id); 
	while(temp!=NULL){
		if(strcmp(id,temp->id)==0) 
		{
			printf("姓名：%s\n",temp->name); 
			printf("专业班级：%s\n",temp->cla);
			printf("学号：%s\n",temp->id);
			system("pause");
			system("cls");
			List2();
			
		}
		else
		{
			temp=temp->next;
		} 
	}
  } 
//删除函数 
void del()
{
	struct student *temp;
	struct student *p;
	int i=0;
	int n;
	temp=head;
	if (temp->next==NULL)
	{
		printf("信息为空"); 
		List2();
	} 
	else{
		printf("删除第几组信息？");
		scanf("%d",&n); 
		while(i<n)
		{
			temp=temp->next;
			i++;
		}
		p=temp->next;
		temp->next=p->next;
		free(p);
	}
 } 
//修改函数
void modify()
{
	struct student *temp;
	int i=0;
	char id[20];
	temp=head->next;
	printf("需要修改的学生学号：");
	scanf("%s",id); 
	while(temp!=NULL){
		if(strcmp(id,temp->id)==0) 
		{
			printf("姓名：%s\n",temp->name); 
			printf("专业班级：%s\n",temp->cla);
			printf("学号：%s\n",temp->id);	
			choose(temp);
			List2();
		}
		else
		{
			temp=temp->next;
		}
	}
 } 
 //增加函数
void create()
{
	struct student *add;
	struct student *temp;	
	int n,i=0;
	temp=head->next;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	} 
	printf("要录入几组信息？");
	scanf("%d",&n);
	while(i<n)
	{
		add=(struct student *)malloc(sizeof(struct student));
		printf("第%d组\n",i+1);
		printf("请输入姓名："); 
		scanf("%s",add->name);
		printf("请输入专业班级："); 
		scanf("%s",add->cla);
		printf("请输入学号："); 
		scanf("%s",add->id);
		temp->next=add;
		temp=add;
		i++;
	}
	temp->next=NULL;
}

void write()
{
	struct student *temp;
	FILE *fp=fopen("xueshengxinxi.txt","a+");
	temp=head->next;
	while(temp!=NULL)
	{
		fprintf(fp,"%s %s %s\n",temp->name,temp->cla,temp->id);
		temp=temp->next;
	}
	fclose(fp);
	system("cls");
 } 

void write1()
{
	struct denglu *temp1;
	FILE *fp=fopen("denglu.txt","a+");
	temp1=head1->next1;
	while(temp1!=NULL)
	{
		fprintf(fp,"%s %s\n",temp1->username,temp1->password);
		temp1=temp1->next1;
	}
	fclose(fp);
	system("cls");
} 

void read1()
{
	struct denglu *temp1,*add;
	FILE *fp=fopen("denglu.txt","r"); 
	temp1=head1; 
	while(!feof(fp))
	{
		add=(struct  denglu*)malloc(sizeof(struct denglu));
		fscanf(fp,"%s %s\n",add->username,add->password);
		temp1->next1=add;
		temp1=add;
	}
	temp1->next1=NULL;
	fclose(fp);
} 

void read()
{
	struct student *temp,*add;
	FILE *fp=fopen("xueshengxinxi.txt","r"); 
	temp=head; 
	while(!feof(fp))
	{
		add=(struct  student*)malloc(sizeof(struct student));
		fscanf(fp,"%s %s %s\n",add->name,add->cla,&add->id);
		temp->next=add;
		temp=add;
	}
	temp->next=NULL;
	fclose(fp);
} 

int main()
{
	head->next=NULL;
	head1->next1=NULL;
	read1();
	read();
	List1();	
}
