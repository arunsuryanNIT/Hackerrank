#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int s, t, capple = 0, corange = 0;
    cin >> s >> t;
    int a, b;
    cin >> a >> b;
    int m, n;
    cin >> m >> n;
    int apples[m], oranges[n];
    for(int i = 0; i < m; i++)
    cin >> apples[i];
    for(int i = 0; i < n; i++)
    cin >> oranges[i];
    for(int i = 0; i < m; i++)
    {
        apples[i] = apples[i] + a;
        if(apples[i] >= s && apples[i] <= t)
        capple++;
    }
    for(int i = 0; i < n; i++)
    {
        oranges[i] = oranges[i] + b;
        if(oranges[i] >= s && oranges[i] <= t)
        corange++;
    }
    cout << capple << endl << corange;
    return 0;
}