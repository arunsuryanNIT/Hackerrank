#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int hash_arr[26] = {0}, count = 0, highest = 0;
    for(int i = 0; i < 26; i++)
    cin >> hash_arr[i];
    string str;
    cin >> str;
    int len = str.length();
    for(int i = 0; i != len; i++)
    {
        count = hash_arr[str[i] - 'a'];
        if(count > highest) { highest = count;}
    }
    cout << len * highest;
    return 0;
}