#include <bits/stdc++.h>
#include <string.h>
using namespace std;
using ll = long long;
#define rep(j,i,n) for(int i = j; i < (int)(n); i++)

int main(){
	char str[100];
	cin >> str;
	
	for(int i =0; i < str.length(); i++){
		if(str[i] == '.' || str[i] == '\0') break;
		cout << str[i];
	}

	cout << "looking for 3" << endl;
	cout << str.strchr(str, '3') << endl;

}
