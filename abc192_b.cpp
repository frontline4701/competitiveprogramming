#include <bits/stdc++.h>
#define ll long long
using namespace std;
template<class T>bool chmax(T &a, const T &b){if(a>b){a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b){if(b<a){a=b; return 1;} return 0;}

int main(){
	string str; cin >> str;

	for(int i = 0; i < str.length(); i++){
		if((i%2 == 0 && str[i] >= 'a' && str[i] <= 'z')){
			continue;
		}	
		else if((i%2 == 1 && str[i] >= 'A' && str[i] <= 'Z'))
		{
			continue;
		}
		else{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}
