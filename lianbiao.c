/*********************************************************
链表的创建与读取
链表的插入与删除

*********************************************************/

#include <stdio.h>                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
#include <malloc.h>

#define LEN sizeof(struct student)       //宏定义结构体的大小

struct student
{
    long num;
	float score;
	struct student *next;         //指向下一个结点
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
		if(n==1)               //33--36行：若仅一个结点或创建第一个节点
		{
			head=p1;
		}
		else                  //37--41行：创建第二个、第三个。。。。。。。结点，使第n个结点的next指针指向第n+1个结点
		{
			p2->next=p1;
		}
		p2=p1;
		
		p1=(struct student *)malloc (LEN);      //当结点多于一个时  开辟内存空间创建结点，后循环链接
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

		p=p->next;                                             //通过next指针不断输出直至结束

	}while(p!=NULL);

}

//删除结点
struct student * del(struct student *head,long num)
{
	struct student *p1,*p2;
	if(head==NULL)                      //如果是空链表
	{
		printf("\nlist null! \n");
		return head;
	}

	p1=head;                                //第一个结点地址给p1
	while(num!=p1->num&&p1->next!=NULL)     //如果p1所指的结点不是要删除的结点并且p1所指的结点不是末结点继续循环，直至找到要删除的结点，使p1指向它
	{
		p2=p1;                               //将p1所指的结点改成p2指向
		p1=p1->next;                         //p1直向下一个结点
	}

	if(num==p1->num)                         //找到要删除的结点
	{
		if(p1==head)                         //如果要删除的是第一个结点
			head=p1->next;                   //头改为第二个结点
		else                                 //要删除的不是第一个结点 
			p2->next=p1->next;                //使要删除的结点的上一个结点的next  指向  要删除结点所指的下一个结点
		printf("delete:%ld\n",num);           //如果需要，继续删除
		n=n-1;
	}
	else
	{
		printf("%ld not been found! \n",num );
	}
	return head;
}


//插入结点
struct student * insert(struct student *head,struct student * stud)
{
	struct student *p0,*p1,*p2;
	p1=head;                                //p1指向第一个结点
	p0=stud;                                //p0指向要插入的结点
	if(head==NULL)                          //如果空链表
	{
		head=p0;
		p0->next=NULL;
	}
	else                                               //不是空链表
	{
		while((p0->num>p1->num)&&(p1->next!=NULL))     //按从小到大，如果要插入的结点>p1所指的结点 或 p1不是最后的结点，继续寻找要插入结点的位置
		{
			p2=p1;                  //将p1给p2
			p1=p1->next;        //p1不断指向下一个结点，直至链表结束或找到位置
		}

		if(p0->num<=p1->num)    //当要插入的结点小于p1所指的结点（即判断是否找到插入的位置）
		{
			if(head==p1)        //如果p1所指的是第一个结点
				head=p0;        //使头（head）指向p0，再127行---使p0所指结点的next指向p1
			else
				p2->next=p0;   //p1不是第一个结点，原p1所指结点的前一个结点的next指向要插入的结点，
			p0->next=p1;       //再使所插入的结点的next指向下一个结点
		}
		else                   //如果p1所指的结点大于要插入的结点
		{
			p1->next=p0;       //p1所指的结点的next指向要插入的结点 
			p0->next=NULL;
		}
	}
	n=n+1;
	return head;
}


int main()
{
	struct student * head,*stu;
	long del_num;
	printf("input records\n");
	head=creat();                             //创建链表
	print(head);                              //读取链表
	printf("\ninput the deleted number:");
	scanf("%ld",&del_num);                    //输入要删除的结点
	while(del_num!=0)                          //149--155行：可删除一个或多个结点
	{
		head=del(head,del_num);
		print(head);
		printf("input the deleted number:");
		scanf("%ld",&del_num);
	}
	printf("\ninput the inserted record:");
	stu=(struct student* )malloc(LEN);             //开辟一个要插入结点的内存空间
	scanf("%ld,%f",&stu->num,&stu->score);
	while(stu->num!=0)                                  //159--166行：可插入一个或多个结点
	{
		head=insert(head,stu);
		print(head);
		printf("input the inserted record:");
		stu=(struct student *)malloc(LEN);
		scanf("%ld,%f",&stu->num,&stu->score);
	}
	return 0;
}









