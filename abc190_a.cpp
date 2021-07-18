#include <bits/stdc++.h>
#define ll long long
using namespace std;
template<class T>bool chmax(T &a, const T &b){if(a>b){a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b){if(b<a){a=b; return 1;} return 0;}

int main(){
	int a,b,c; cin >> a >> b >> c;
	if(a < b) cout << "Aoki";
	else if(a > b) cout << "Takahashi";
	else{
		if (c == 0){
			cout << "Aoki";
		}
		else{
			cout << "Takahashi";
		}
	}

}
