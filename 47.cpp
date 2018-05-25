 #include<iostream>
    using namespace std;
    int main()
    {
 int arr[5],n,i,large,small;
 cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 large=arr[0];
 small=arr[0];
 for(i=1;i<n;i++)
 {
     if(arr[i]<small)
     small=arr[i];
     if(arr[i]>large)
     large=arr[i];
 }
 cout<<small<<'\0'<<large;
 return 0;
    }
    
