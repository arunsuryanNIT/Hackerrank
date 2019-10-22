#include <bits/stdc++.h>
using namespace std;
int main() {
    int p, d, m, s;
    cin >> p >> d >> m >> s;
    int nr = 0;
    while(p <= s){
        s = s - p;
        ++nr;
        p = p - d;
        if(p < m) p = m;
    }
    cout << nr << endl;
    return 0;
}