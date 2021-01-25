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

//��������
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

//�˵�1 
 void List1()
{
	printf("****************************************\n");
	printf("*********ѧ��֤����ϵͳ���˵�***********\n");
	printf("****************************************\n");
	printf("*********1.ע��         2.��¼**********\n");
	printf("*********0.�˳�ϵͳ           **********\n");
		int input = 0;
		printf("��ѡ��:");
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
				printf("�˳�ϵͳ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;			 			
		}
	while(input);	
} 
void choose(struct student *temp)
 {
 	int n = 0;
 	printf("��ѡ�����޸ĵ���Ŀ��");
 	printf("1.ѧ������");
 	printf("2.ѧ��ѧ��");
 	printf("3.ѧ��רҵ�༶\n");
 	scanf("%d",&n);
 	switch(n)
 	{
		case 1:
	 		printf("�������޸ĺ��������");
	 		scanf("%s",temp->name);
	 		break; 
	 	case 2:
	 		printf("�������޸ĺ��ѧ�ţ�");
		 	scanf("%s",temp->id);
		 	break;
		case 3:
			printf("�������޸ĺ��רҵ�༶��");
			scanf("%s",temp->cla);
			break;
	}		 	
 }

//��¼�˵�2
void List2()
{
	int n = 0;
	printf("****************************************\n");
	printf("***************��ѡ����***************\n");
	printf("*************1.ѧ����Ϣ��ѯ*************\n");
	printf("***************2.�޸���Ϣ***************\n");
	printf("***************3.ɾ����Ϣ***************\n");
	printf("**************4.�������˵�**************\n");
	printf("*************5.ѧ����Ϣ¼��*************\n"); 
	printf("***************0.�˳�ϵͳ***************\n"); 
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
			printf("�޸ĳɹ�!");
			system("pause");
			system("cls");
			List2(); 
			break;
		case 3:
			del();
			printf("ɾ���ɹ�!");
			system("pause");
			system("cls");
			List2(); 
			break;
		case 4:
			List1();
			break;
		case 5:
			create();
			printf("¼��ɹ�!");
			system("pause");
			system("cls");
			List2(); 
			break;	
		case 0:
			leave();
			break;				
	 } 
 } 
//ע�ắ�� 
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
	printf("������ע���ѧ��:");
	scanf("%s",xuehao);
	
	do
	{
		printf("����������:");
		scanf("%s",mima1);
		printf("���ٴ���������:");
		scanf("%s",mima2);
		
		if(strcmp(mima1,mima2) == 0)
		{
			strcpy(add->username,xuehao);
			strcpy(add->password,mima1);
			break;
		}
		else
		{
			printf("�������벻һ�£��Ƿ��������룿");
			fflush(stdin);//������뻺����(std��standard,in��input) 
			ch = getchar();
		}
	}
	while(ch == 'y');
	temp1->next1 = add;
	add->next1 = NULL;
	printf("ע�����!"); 
	write1();                              
	system("pause");
	system("cls");
	List1();
}
//��¼���� 
void denglu()
{
	char xuehao[20];
	char mima[20];
	printf("������ѧ��:");
	scanf("%s",xuehao);
	printf("����������:");
	scanf("%s",mima);
	temp1=head1->next1;
	while(temp1 != NULL)
	{ 
		if((strcmp(xuehao,temp1->username) == 0)&&(strcmp(mima,temp1->password) == 0))
		{
		 	printf("��¼�ɹ�!");
			system("pause");
			system("cls");
			List2();
			break;  
		}
		if(temp1 == NULL)
		{
			printf("��¼ʧ��!");
			system("pause");
			system("cls");
			List1();
			break;
		}
		temp1 = temp1->next1;
	}
}
//�˳�ϵͳ leave()
void leave()
{
	write();
	write1();
	printf("****************************************\n");
	printf("************�˳�ѧ������ϵͳ************\n");
	printf("**************��ӭ�´�ʹ��**************\n"); 
	printf("****************************************\n");
	exit(0);
 } 

 //��ѯ����
 void search()
 {
 	struct student *temp;
	int i=0;
	char id[20];
	temp=head->next;
	printf("��������Ҫ���ҵ��˵�ѧ�ţ�");
	scanf("%s",id); 
	while(temp!=NULL){
		if(strcmp(id,temp->id)==0) 
		{
			printf("������%s\n",temp->name); 
			printf("רҵ�༶��%s\n",temp->cla);
			printf("ѧ�ţ�%s\n",temp->id);
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
//ɾ������ 
void del()
{
	struct student *temp;
	struct student *p;
	int i=0;
	int n;
	temp=head;
	if (temp->next==NULL)
	{
		printf("��ϢΪ��"); 
		List2();
	} 
	else{
		printf("ɾ���ڼ�����Ϣ��");
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
//�޸ĺ���
void modify()
{
	struct student *temp;
	int i=0;
	char id[20];
	temp=head->next;
	printf("��Ҫ�޸ĵ�ѧ��ѧ�ţ�");
	scanf("%s",id); 
	while(temp!=NULL){
		if(strcmp(id,temp->id)==0) 
		{
			printf("������%s\n",temp->name); 
			printf("רҵ�༶��%s\n",temp->cla);
			printf("ѧ�ţ�%s\n",temp->id);	
			choose(temp);
			List2();
		}
		else
		{
			temp=temp->next;
		}
	}
 } 
 //���Ӻ���
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
	printf("Ҫ¼�뼸����Ϣ��");
	scanf("%d",&n);
	while(i<n)
	{
		add=(struct student *)malloc(sizeof(struct student));
		printf("��%d��\n",i+1);
		printf("������������"); 
		scanf("%s",add->name);
		printf("������רҵ�༶��"); 
		scanf("%s",add->cla);
		printf("������ѧ�ţ�"); 
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
