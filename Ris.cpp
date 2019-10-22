#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while(T--)
    {
        long long unsigned int n, m;
        cin >> n >> m;
        if(m >= 0 && n >= 0)
        {
        if(m >= n )
        {
            cout << "Yes" << " " << n;
        }
        else
        {
            cout <<"NO";
        }
        cout << endl;
        }
    }
    return 0;
}