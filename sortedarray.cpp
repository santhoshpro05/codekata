#include <iostream>
using namespace std;
int main()
{
	int Arr[5],n,i,j,temp;
	cout<<"enter number";
	cin>>n;
cout<<"enter elements";
		for(i=0;i<n;i++)
		{
	cin>>Arr[i];
}

for(i=1;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
	if(Arr[i]>Arr[j])
	{
	    temp=Arr[i];
	    Arr[i]=Arr[j];
	    Arr[j]=temp;
	}
    }
}
cout<<"sorted elements";
for(i=0;i<n;i++)
{
cout<<Arr[i];
}
}
