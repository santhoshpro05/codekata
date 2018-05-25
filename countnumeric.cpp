 #include<iostream>
    using namespace std;
    int main()
    {
    char str[50];
     
    int i,count=0;
    cin>>str;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
        count=count+1;
        }    
        }
        cout<<count;
    return 0;
    }
