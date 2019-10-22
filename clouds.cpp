#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, i;
    cin >> n;
    int arr[n], count = 0;
    for(i = 0; i < n; i++)
    cin >> arr[i];
    for(i = 0; i < n; i++)
    {
        if(arr[i + 2] == 0)
        {
            i = i + 2;
            count++;
        }
        else if(arr[i + 1] == 0)
        {
            i = i + 1;
            count++;
        }
    }
    cout << count;
    return 0;
}