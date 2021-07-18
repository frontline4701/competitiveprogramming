#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s; cin >> s;

	reverse(s.begin(), s.end());
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '6'){
			cout << "9";
			continue;
		}
		if(s[i] == '9'){
			cout << "6";
			continue;
		}
		else{
			cout << s[i];
		}
	}
}
