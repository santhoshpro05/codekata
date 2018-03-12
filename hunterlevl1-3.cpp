#include<stdio.h>

void main()
{
	long int a[100000],v,i;
	int f=0;
	printf("enter a no");
	scanf("%ld",&v);
		printf("enter  numbers\n");
	for(i=0;i<v;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=0;i<v;i++)
	{
		if(a[i]==i)		
		{
			f=1;
		printf("%d",i);
		}
	}	
	if(f==0)
	printf("-1");
}
	
