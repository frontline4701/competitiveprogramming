#include <bits/stdc++.h>

using namespace std;

bool isKaibun(string str){
	for(int i = 0; i < str.length() / 2; i++){
		if(str[i] != str[str.length() - 1 - i]) return false;
	}
	return true;
}

int main()
{
	string str; cin >> str;
	int cnt = 0;
	int len = str.length();
	while(isKaibun(str) == false){
		str.insert(0, "0");
		cout << str << endl;
		cnt++;
		if(cnt > len)
		{
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;

}
