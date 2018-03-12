#include <stdio.h>
int main()
{
    int a[10],b,c[10],d,i,j,k=0;
    scanf("%d",&b); scanf("%d",&d);
    for(i=0;i<b;i++)
    {
      scanf("%d",&a[i]);  
    }
    for(i=0;i<d;i++)
    {
      scanf("%d",&c[i]);  
    }
    for(i=0;i<b;i++)
   { 
       for(j=i+1;j<b;j++)
       {
           
       if(a[i]=c[j])
       {++k;
       }}}
       if(k!=0)
       {printf("YES");
       }else
       {printf("NO");}
    return 0;

}
