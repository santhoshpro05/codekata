# include <stdio.h>

int main()
{
    int l, r;
     quickSort(A, 0, arr_size-1);
     r = arr_size-1; 
    while (l < r)
    {
         if(A[l] + A[r] == sum)
              return 1; 
         else if(A[l] + A[r] < sum)
              l++;
         else 
              r--;
    }    
    return 0;
}
