#include <iostream>
using namespace std;

int main()
{ char a[10];
    int count = 0,i;
  cin>>a;
    for(i = 1;a[i]!='\0';i++)
    {
        if(!isspace (a[i]))
        
        count++;
      
    }
    cout<<count;
    return 0;
}
