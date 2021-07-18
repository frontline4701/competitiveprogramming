#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> s(3);

	cin >> s[0] >> s[1] >> s[2];

	sort(s.begin(), s.end());

	if(s[1] - s[0] == s[2] - s[1]) cout << "Yes" << endl;
	else cout << "No" << endl;
}
