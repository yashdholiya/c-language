#include<stdio.h>
 int a()

{
int b[] ={25,10,5,2,1};
	int a;
	
	printf("enter amount ");
	scanf("%d",&a);



	printf("\n25-%d",a/25);
	a=a%25;
	
	printf("\n10-%d",a/10);
	a=a%10;


	printf("\n5-%d",a/5);
	a=a%5;

	printf("\n2-%d",a/2);
	a=a%2;

	printf("\n1-%d",a/1);
	a=a%1;
	return a;
}


int main()
{
  a();
}