#include <bits/stdc++.h>
using namespace std;
int main()
{
    string time;
    cin >> time;
    if(time[8] == 'A')
    {
        int number = (10 * static_cast <int> (time[0] - '0')) + static_cast <int> (time[1] - '0');
        if(number == 12)
        {cout << "00";
        for(int i = 2; i < 8; i++)
        cout << time[i];}
        else
        {for(int i = 0; i < 8; i++)
        cout << time[i];}
    }
     else if(time[8] == 'P')
    {
        int newtime = (10 * static_cast <int> (time[0] - '0')) + static_cast <int> (time[1] - '0');
        if(newtime == 12)
        {
            cout << "12";
            for(int i = 2; i< 8; i++)
            cout <<time[i];
        }
        else
        {
            cout << 12 + newtime;
            for(int i = 2; i< 8; i++)
            cout <<time[i];
        }
        
    }
    return 0;
}