#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string str;
    long long int n, i = 0, count = 0;
    vector <char> vec;
    cin >> str >> n;
    if(str == "a") {cout << n; exit(0);}
    while(n != 0)
    {
        if(i == str.length()) i = i % str.length();
        vec.push_back(str[i]);
        i++;
        n--;
    }
    for(auto j = vec.begin(); j != vec.end(); j++)
        {if(*j == 'a') count++;}
    cout << count;
    return 0;
}