#include <stdio.h>
int main()
{
	int num1,num2,temp;
	int a,b;
	int remainder;
	printf("\n");
	scanf("%d %d",&num1,&num2);
    a=num1;
    b=num2;
    if(num1<num2)
    {   
    	temp=num1;
    	num1=num2;2
        num2=temp;
    }
     
    remainder=num1%num2; 
    while(remainder!=0)
    {
      num1=num2;
      num2=remainder;
      remainder=num1%num2;
    }    
    
    printf("%d\n",num2 );

    printf("%d\n",a*b/num2);

    return 0;


}