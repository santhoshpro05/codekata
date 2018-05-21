#include <iostream>
using namespace std;
int main()
{
	int Arr[5],n,i,small;
	cout<<"enter number";
	cin>>n;
cout<<"enter elements";
		for(i=0;i<n;i++)
		{
	cin>>Arr[i];
}
small=Arr[0];
for(i=1;i<n;i++)
{
	if(Arr[i]<small)
	{small=Arr[i];
}
}
	cout<<"small number is "<<small;
}
