#include <algorithm> 
#include <iostream>
using namespace std; 
int main() 
{ 
    int T;
    cin >> T;
    while(T--)
    {
        string s;
        cin >> s;
	bool val 
		= next_permutation(s.begin(), 
						s.end()); 
	if (val == false) 
		cout << "no answer"
			<< endl; 
	else
		cout << s << endl; 
    }
	return 0; 
} 
