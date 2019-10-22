#include <bits/stdc++.h>
using namespace std;
int revu(long long int n)
{
    long long int rem = 0, rev = 0;
    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int count = 0;
    long long int i, j, k;
    cin >> i >> j >> k;
    for(long long int iter = i; iter <= j; iter++)
    {
        if(abs(iter - revu(iter)) % k == 0)
        count ++;
    }
    cout << count;
    return 0;
}