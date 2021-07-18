#include <bits/stdc++.h>
#define ll long long
using namespace std;
template<class T>bool chmax(T &a, const T &b){if(a>b){a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b){if(b<a){a=b; return 1;} return 0;}

int main(){
	string s; cin >> s;
	for(int i = 0; i < 2; i++){
		if(s[i] != s[i+1]){
			cout << "Lost";
			return 0;
		}
	}
	cout << "Won";
}
