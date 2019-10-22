#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string str;
    long long int n, i = 0, count = 0, tota = 0;
    vector <char> vec;
    cin >> str >> n;
    if(str == "a") {cout << n;}
    else{
    for(i = 0; i < str.length(); i++)
    {
        if(str[i] == 'a') count++;
    }
    tota = count * (n / str.length());
    long long int anocount = 0;
    for(i = 0; i < n % str.length(); i++)
        if(str[i] == 'a') anocount++;
    tota = tota + anocount;
    cout << tota;
    }
    return 0;
}