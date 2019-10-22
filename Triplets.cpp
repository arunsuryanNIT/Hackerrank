#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> vec;
    int element, size, i, j ,k, count = 0, d;
    cin >> size >> d;
    for(i = 0; i < size; i++){
        cin >> element;
        vec.push_back(element);
    }
    for(i = 0; i < size - 2; i++)
    {
        for(j = i + 1; j < size - 1; j++)
        {
            if(vec[j] - vec[i] == d)
            {
                for(k = j + 1; k < size; k++)
                {
                    if(vec[k] - vec[j] == d) count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}