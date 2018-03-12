#include <stdio.h>

int main(void) {
	char s[100];
	int s2[40];
	int n,i,d,j=97;
	scanf("%d",&n);
	
	for(d=0;d<n;d++)
	{
	 scanf("%d",&s2[d]);
	}

	for(i=1;i<=26;i++)
	{
		s[i]=j;
		printf("%c",s[i]);
		j++;
	}
	printf("\n");
	for(d=0;d<=n;d++)
	{
		for(i=1;i<=26;i++)
		{
			if(s2[d]==i)
			{
				printf("%c",s[i]);
			}
		}
	}
	printf("\n");
	printf("%d",n-1);
	
	// your code goes here
	return 0;
}
