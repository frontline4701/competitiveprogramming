#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str; cin >> str;
	string tmp = "";
	tmp += str[1];
	tmp += str[2];
	tmp += str[0];

	cout << tmp;
}
