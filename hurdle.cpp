#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, i, hash[101] = {0}, big, index = 0;
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++)
    cin >> arr[i];
    for(i = 0; i < n; i++)
    hash[arr[i]]++;
    big = hash[0];
    index = 0;
    for(i = 1; i <= 100; i++)
    {
        if(big < hash[i])
        {
            big = hash[i];
            index = i;
        }
    }
    cout << n - big;
    return 0;
}