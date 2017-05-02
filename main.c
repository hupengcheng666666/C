/***********************************************************
求10位学生中成绩最好的
并输出其信息
************************************************************/


#include <stdio.h>

struct Student
{
    char name[20];
    int num;
    float score[3];
    float average;
}student[10] ,*p;



void introduce()
{
    int i,j;
    printf("请输入10名学生的姓名、学号及成绩\n");
    for(i=0;i<10;i++)
    {
	printf("第%d名\n",i+1);
	printf("name:");
	scanf("%s",student[i].name);
	printf("\nnum:");
	scanf("%d",&student[i].num);
	for(j=0;j<3;j++)
	{
	   printf("\nscore:");
           scanf("%f",&student[i].score[j]);
	}
    }
}


void average()
{
   int i;
   for(i=0;i<10;i++)
   student[i].average=(student[i].score[0]+student[i].score[1]+student[i].score[2]                      )/3;


}


void max()
{
    
    int i,j;
    for(i=0;i<9;i++)
    {
	p=&student[i];
	for(j=i+1;j<10;j++)
	{
	    if(student[i].average<student[j].average)
	    {
		p=&student[j];
	    }
	}     
	printf("%s  %d  %f %f %f  %f \n",p->name,p->num,p->score[0],p->score[1],p->score[2],p->average);
    }
}


int main()
{
    int i;
    float Taverage;
    introduce();
    average();
    Taverage=student[0].average;
    for(i=1;i<10;i++)
	Taverage+=student[i].average;
    printf("Total average:%f\n",Taverage);
    max();
    return 0;
    

}

























