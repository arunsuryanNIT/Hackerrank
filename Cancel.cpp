#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int T, i = 0;
    int count = 0;
    cin >> T;
    while(T--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(i = 0; i < n; i++) {cin >> arr[i]; if(arr[i] <= 0) count ++;}
        if(count >= k) cout << "NO";
        else cout <<"YES";
        cout << endl;
        count = 0;
    }
    return 0;
}