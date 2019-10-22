#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, sum = 0, high = 0, first = 0;
    cin >> n;
    int hash[101] = {0};
    int arr[n];
    for(int i = 0; i < n; i++){cin >> arr[i];}
    for(int i = 0; i < n; i++){hash[arr[i]]++;}
    for(int i = 1; i < 100; i++)
    {
        first = max(first, hash[i-1]+hash[i]);
    }
    cout << first;
    return 0;
}
