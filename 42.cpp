
#include <iostream>
#include<string.h>
using namespace std;
int main()
{
   char str1[10],str2[10];
   int a,b;
   cin>>str1>>str2;
   a=strlen(str1);
   b=strlen(str2);

   {
       if(a==b)
       {
           cout<<str1;
       }
       else if(a<b)
       {
           cout<<str2;
       }
       else
       {
           cout<<str1;
       }
}
}
