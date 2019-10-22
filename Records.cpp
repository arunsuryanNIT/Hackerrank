#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, i = 0, j = 0, k = 0, ele1, ele2, count1 = 0, count2 = 0;
    cin >> n;
    int arr[n], minimum[n], maximum[n];
    for(i = 0; i < n; i++)
    cin >> arr[i];
    ele1 = maximum[0] = arr[0];
    ele2 = minimum[0] = arr[0];
    for(i = 1; i < n; i++)
    maximum[++j] = max(maximum[j], arr[i]);
    for(i = 1; i < n ; i++)
    minimum[++k] = min(minimum[k], arr[i]);
    for( i = 0; i < n; i++)
    {
        if(ele1 > arr[i])
        {
            ele1 = arr[i];
            count1++; 
        }
    }
    for( i = 0; i < n; i++)
    {
        if(ele2 < arr[i])
        {
            ele2 = arr[i];
            count2++; 
        }
    }
    cout << count2 << " " << count1;
    return 0;
}