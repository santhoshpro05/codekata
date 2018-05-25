#include <iostream>
using  namespace std;
int main()
{
int n,i,d;
cin>>d;
for(n=1;n<d;n++)
{
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            break;
        
        }
    }
    if(n==i)
    cout<<n;
}
return 0;
}
