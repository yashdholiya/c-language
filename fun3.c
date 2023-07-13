#include<stdio.h>


int  pe( int num )
{
 int n, sum=0, i;
n=num;
 for( i=1; i<n; i++)
{
	if(num %i==0)
	{
	sum=sum+i;
	}
}
	if(num==sum)

printf("%d parfect number",num);
else
printf("%d not parfect number ",num);
}


int main()
{
	int num;
	printf(" enter num");
	scanf("%d",&num);
	pe(num);
} 