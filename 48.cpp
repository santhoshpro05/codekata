 #include<iostream>
    using namespace std;
    int main()
    {
 int arr[5],n,i,sum=0,avg;
 cin>>n;
 for(i=0;i<n;i++)
 {
     cin>>arr[i];
sum=sum+arr[i];
}
avg=sum/n;
cout<<avg;
 return 0;
    }
    
