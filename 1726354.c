#include<stdio.h>
int main()
{
 	int a[1000],i,size,max,min;
	printf("enter the size of the array ");
	scanf("%d",&size);
		for( i=0; i<size; i++)
		{
			scanf("%d",&a[i]);
		}
		max=a[0];
		min=a[0];

		for( i=0; i<size; i++)
		{
			if(a[i]>max)
			{			
				max=a[i];
			}
			else
			if(a[i]<min);
			{	
				min=a[i];
			}
		}
		
		printf("maximum value:%d\n",max);
		printf("minumum value:%d\n",min);
return 0;
}