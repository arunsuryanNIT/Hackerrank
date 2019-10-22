 #include <bits/stdc++.h>
using namespace std;
int getgcd(int a, int b)
{
    if (a == 0) 
        return b;  
    return getgcd(b % a, a);
}
int getlcm(int a, int b)
{
    return (a * b) / getgcd(a, b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m, n, i, j;
    cin >> m >> n;
    int arr1[m], arr2[n];
    for(i = 0; i < m; i++)
    cin >> arr1[i];
    for(j = 0; j < n; j++)
    cin >> arr2[j];
    int lcm = arr1[0];
    int gcd = arr2[0];
    for(i = 0; i < m; i++)
    {lcm = getlcm(lcm, arr1[i]);}
    for(j = 0; j < n; j++)
    {gcd = getgcd(gcd, arr2[j]);}
    int count = 0, it = 1, n2 = 0;
    while(n2 <= gcd)
    {
        n2 = lcm * it;
        if(gcd % n2 == 0) {count ++;}
        it++;
    }
    cout << count;
    return 0;
}