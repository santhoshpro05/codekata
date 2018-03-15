#include<iostream>
int main()
{
    int a,b,n,t,i=0,sum=0;
    long cout=0;
    cin>>n;
    sum=n;
    while(n!=0)
    {
        a=n%10;
        sum=sum*a;
        n=n/10;
    }
    cout<<sum;}
