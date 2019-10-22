#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, i, k , q, m;
    cin >> n >> k >> q;
    k = k %n ;
    int arr[n];
    for(i = 0; i < n; i++)
    cin >> arr[i];
    reverse (arr, arr + n - k);
    reverse(arr + n - k, arr + n);
    reverse(arr, arr + n);
    for (i = 1; i <= q; i++)
    {
        cin >> m;
        cout << arr[m] << endl;
    }
    return 0;
}