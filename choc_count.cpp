#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    while(T--)
    {
        int n, c, m, choc = 0, choctoadd;
        cin >> n >> c >> m;
        choc = n / c;
        n = choc;
        choctoadd = n / m;
        while(choctoadd != 0)
        {
            choctoadd = n / m;
            n = (n % m) + (n / m);
            choc = choc + choctoadd;
        }
        cout << choc << endl;
    }
    return 0;
}