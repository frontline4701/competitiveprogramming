#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	string str; cin >> str;

	for(int i = 0; i < n; i++){
		if(str[i] == '0') continue;
		else{
			if(i % 2 == 1) cout << "Aoki" << endl;
			else cout << "Takahashi" << endl;
			break;
		}
	}
}
