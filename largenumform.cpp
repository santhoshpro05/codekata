#include <bits/stdc++.h>
using namespace std;
int printMaxNum(int num)
{
    int count[10] = {0};
    string str = to_string(num);
    for (int i=0; i<str.length(); i++)
        count[str[i]-'0']++;
    int result = 0, multiplier = 1;
    for (int i = 0; i <= 9; i++)
    {
        while (count[i] > 0)
        {
            result = result + (i * multiplier);
            count[i]--;
            multiplier = multiplier * 10;
  }
  }
    return result;
}
int main()
{
    int num = 382751694;
    cout << printMaxNum(num);
    return 0;
}
