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

int	neww=rev;
		while(neww>0)
	{
	    rem1=neww%10;
	  cout<<rem1<<" ";
	    neww=neww/10;
	}
	return 0;
}
