#include<iostream>
    using namespace std;
    int main()
    {
       int n,i, first = 0, second = 1, fibonicci=0;

       cin >>n;
      
       for (  i = 0 ; i < n ; i++ )
       {
          if ( i <= 1 )
             fibonicci = i;
          else
          {
             fibonicci = first + second;
             first = second;
             second = fibonicci;
         
         } cout << fibonicci <<" ";
       }
       return 0;
    }
