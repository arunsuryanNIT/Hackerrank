#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int size, k, count = 0;
    cin >> size >> k;
    long long int arr[size] = {0};
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(i < j)
            {
                if((arr[i] + arr[j]) % k == 0)
                count ++;
            }
        }
    }
    cout << count;
    return 0;
}