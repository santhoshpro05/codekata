#include <iostream>
using namespace std;
int main()
{
	int n,rem,rev=0,rem1;

	cin>>n;
	while(n>0)
	{
	    rem=n%10;
	   rev=(rev*10)+rem;
	    n=n/10;
	}

int	n1=rev;
		while(n1>0)
	{
	    rem1=n1%10;
	  cout<<rem1<<" ";
	    n1=n1/10;
	}
	return 0;
}
