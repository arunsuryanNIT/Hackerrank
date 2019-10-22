#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int size, k, i, element, maxi = 0;
    cin >> size >> k;
    int arr[k] = {0};
    vector <int> vec;
    for(i = 0; i < size; i++){
        cin >> element;
        vec.push_back(element);
    }
    for(i = 0; i < size; i++){
        arr[vec[i] % k]++;
    }
    if (k % 2 == 0) 
        arr[k/2] = min(arr[k/2], 1); 

    int res = min(arr[0], 1); 
  
    for (int i = 1; i <= k/2; i++) 
        res += max(arr[i], arr[k-i]); 
    cout << res;
    return 0;
}