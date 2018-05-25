 #include<iostream>
    using namespace std;
    int main()
    {
int n;
cin>>n;
if(n!=0&&(n&(n-1))==0)
{
    cout<<"power of two";
}

    else
    {
    cout<<"non power of two";
}
 return 0;
    }
    
