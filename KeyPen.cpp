#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, s, result = -1, i = 0, j = 0;
    cin >> s >> n >> m;
    int key[n], pen[m];
    for(i = 0; i < n; i++)
    cin >> key[i];
    for(j = 0; j < m; j++)
    cin >> pen[j];
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(key[i] + pen[j] <= s)
            {
                result = max(result, key[i] + pen[j]);
            }
        }
    }
    cout << result;
    return 0;
}