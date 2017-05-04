/*********************************************************
链表的创建与读取

*********************************************************/

#include <stdio.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
#include <malloc.h>

#define LEN sizeof(struct student)

struct student
{
    long num;
	float score;
	struct student *next;
};

int n;

//建立链表
struct student *creat()
{
    struct student *head;
	struct student *p1, *p2;
	n=0;
	p1=p2=(struct student*)malloc(LEN);
	scanf("%ld,%f",&p1->num,&p1->score);
	head=NULL;
	while(p1->num!=0)
	{
		n=n+1;
		if(n==1)
		{
			head=p1;
		}
		else
		{
			p2->next=p1;
		}
		p2=p1;
		
		p1=(struct student *)malloc (LEN);
		scanf("%ld,%f",&p1->num,&p1->score);
	}
	p2->next=NULL;
	return head;

}

//输出链表
void print(struct student *head)
{
	struct student *p;
	printf("These %d recorde are :\n",n);
	p=head;
	if(head!=NULL)
	do
	{
		printf("%ld %5.1f\n",p->num,p->score);

		p=p->next;

	}while(p!=NULL);

}


int main()
{
	struct student * head;
	head=creat();
	print(head);
	return 0;

}









