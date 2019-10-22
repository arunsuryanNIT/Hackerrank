#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int arr[5], sum = 0, min = 0, max = 0, highest = 0, lowest = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    for(int i = 0; i < 5; i++)
    {
        max = sum - arr[i];
        if(max > highest){ highest = max;}
    }
    lowest = sum;
    for(int i = 0; i < 5; i++)
    {
        min = sum - arr[i];
        if(min < lowest){ lowest = min;}
    }
    cout << lowest << " " << highest;
}