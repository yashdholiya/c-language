#include<stdio.h>

int main()
{
	char a[30],b[30];
	int i,j,n,k=0,m=0;

	printf("enter name");
	scanf("%s",&a);
	
	for(i=0; a[i]!='\0'; i++);
	
	n=i-1;
	j=n;
	for(i=0; i<=n; i++)
	{	
		if(i%2==0)
		{
			b[m]=a[k];
			k++;
			m++;
		}		
		else
		{
			b[m]=a[j];
			m++;
			j--;
		}	
	}
	b[m]='\0';
	printf("%s",b);
	return 0;
}



