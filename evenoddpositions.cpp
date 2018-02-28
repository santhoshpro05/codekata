 #include <bits/stdc++.h>
using namespace std;
 int main()
 {
void rearrange(int a[], int size)
{
    int positive = 0, negative = 1;
 
    while (true) {
        while (positive < size && a[positive] >= 0)
            positive += 2;
        while (negative < size && a[negative] <= 0)
            negative += 2;
 if (positive < size && negative < size)
            swap(&a[positive], &a[negative]);
        else
            break;
    }
}
    int arr[] = { 1, -3, 5, 6, -3, 6, 7, -4, 9, 10 };
    int n = (sizeof(arr) / sizeof(arr[0]));
 
    rearrange(arr, n); 
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    return 0;
}
