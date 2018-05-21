#include <iostream>
using namespace std;
int main()
{
	int n,i,j;
	float median,Arr[5],temp;
	cout<<"enter number";
	cin>>n;
cout<<"enter elements";
		for(i=0;i<n;i++)
		{
	cin>>Arr[i];
}
 
for(i=0;i<n;i++)
{
    for(j=0;j<n-1;j++)
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
if(n%2==0)
median=(Arr[n/2]+Arr[n/2+1])/2.0;
else
median=Arr[n/2+1];
for(i=0;i<n;i++)
cout<<Arr[i];
cout<<"media element"<<median;
}
