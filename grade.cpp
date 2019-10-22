#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    cin >> T;
    while(T--)
    {
        int grade = 0;
        cin >> grade;
        if(grade < 38){cout << grade;}
        else 
        {
            int copygrade = grade;
            while(copygrade % 5 != 0)
            {
                copygrade++;
            }
            if(copygrade - grade < 3)
            {
                cout << copygrade;
            }
            else
            {
                cout << grade;
            }
        }
        cout << endl;
    }
    return 0;
}