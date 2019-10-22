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
        int A, B, C;
        cin >> A >> B >> C;
        int diff1 = abs(C - A);
        int diff2 = abs(C - B);
        if( diff1 < diff2)
        {
            if(A > C) cout << "Cat B";
            else if(B > C) cout << "Cat A";
            else cout << "Cat A";
        }
        else if(diff2 < diff1)
        {
            if(A > C) cout << "Cat B";
            else if(B > C) cout << "Cat A";
            else cout << "Cat B";
        }
        else
        {
            cout << "Mouse C";
        }
        cout << endl;
    }
    return 0;
}