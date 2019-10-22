#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        int res = 1;
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 != 0)
            {
                res = res * 2;
            }
            else
            {
                res = res + 1;
            }
        }
        cout << res << endl;
    }
    return 0;
}