#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    int x, y;
    for(int i = 1; i <= T; i++)
    {
        cin >> x >> y;
        cout << (floor(sqrt(y) - ceil(sqrt(x)) + 1)) << endl;
    }
    return 0;
}