#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], d, m, i = 0, j, sum = 0, count = 0;
    for(i = 0; i < n; i++)
    cin >> arr[i];
    cin >> d >> m;
    int copy = m;
    for(i = 0; i < n - m + 1; i++)
    {
         j = i;
        while(m--)
        {
            sum = sum + arr[j];
            j = j + 1;
        }
        if(sum == d)
        {
            count++;
        }
        sum = 0;
        m = copy;
    }
    cout << count;
    return 0;
}