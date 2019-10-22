#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int T;
    cin >> T;
    while(T--)
    {
        int n, m, s;
        cin >> n >> m >> s;
        s--;
        int result  = (s + m - 1) % n;
        cout << result + 1 << endl;
    }
    return 0;
}