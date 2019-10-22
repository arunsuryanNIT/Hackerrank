#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int size, i, element, count = 0, sum;
    cin >> size >> sum;
    unordered_map<int, int> m;
    vector <int> vec;
    for(i = 0; i < size; i++){
        cin >> element;
        vec.push_back(element);
    }
    for(i = 0; i < size; i++){
        m[vec[i]]++;
    }
    for(i = 0; i < size; i++){
        count = count + m[sum - vec[i]];
    }
    cout << count / 2;
    return 0;
}