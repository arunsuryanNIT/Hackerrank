#include <bits/stdc++.h>
# define ll long long 
using namespace std;
int main() {
    ll t;
    cin>>t;
    while(t--)
     {
        ll w,b,x,y,z,sum=0;
      cin>>w>>b>>x>>y>>z;
        if(x>y+z)
        {
            sum = b*y+w*(y+z);
        }
        else if(y>x+z)
        {
            sum=b*(x+z)+w*x;
        }
        else
        {
            sum=b*y+x*w;
        }
        cout<<sum<<endl;   
    }
    return 0;
}