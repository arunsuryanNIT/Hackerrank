#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int size;
    double plus = 0, minus = 0, zero = 0;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if(arr[i] > 0) plus++;
        else if(arr[i] < 0) minus ++;
        else zero++;
    }
    double plratio, mratio, zratio;
    plratio = plus / (plus + minus + zero);
    mratio = minus / (plus + minus + zero);
    zratio = zero / (plus + minus + zero);
    cout << plratio << "\n" << mratio << "\n" << zratio;
    return 0;
}