#include <bits/stdc++.h>
using namespace std;
bool checkKaprekar(int n)
{
    int square = n * n, j = 0, first = 0, second = 0, noofdigit, i;
	noofdigit = log10(square) + 1;
    string str = to_string(square);
	if(noofdigit % 2 == 0)
	{
		for(i = 0; i < str.length() / 2; i++)
		{
			first = first * 10 + int(str[i] - '0');
		}
		for(i = str.length() / 2; i < str.length(); i++)
    	{
       		second = second * 10 + int(str[i] - '0');
    	}
	}
	if(noofdigit % 2 != 0)
	{
		for(i = 0; i < str.length() / 2; i++)
		{
			first = first * 10 + int(str[i] - '0');
		}
		for(i = str.length() / 2 ; i < str.length(); i++)
    	{
       		second = second * 10 + int(str[i] - '0');
    	}
	}
    if(first + second == n)
        return true;
    else
        return false;
}
int main()
{
    int p, q, flag = 0;
    cin >> p >> q;
    for(int i = p; i <= q; i++)
    {
        if(checkKaprekar(i))
		{
			cout << i << endl;
			flag = 1;
		}
    }
	if(flag == 0) cout << "INVALID RANGE";
}