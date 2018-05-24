#include <iostream>

using namespace std;

int main()
{
   int a[10],i,greatest;
   for(i=0;i<10;i++)
   {
       cin>>a[i];
   }
   greatest=a[0];
   for(i=0;i<10;i++)
   {
       if(a[i]>greatest)
       greatest=a[i];
   }
cout<<greatest;
}
