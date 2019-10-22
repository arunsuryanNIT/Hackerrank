#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int hash[101] = {0}, i, count  = 0;
    int size;
    cin >> size;
    int a[size];
    for(i = 0; i < size; i++)
    cin >> a[i];
    for(i = 0; i < size; i++)
    hash[a[i]]++;
    for(i = 1; i <= 100 ; i++)
    {
       count = count + hash[i] / 2;
    }
    cout << count;
return 0;
}