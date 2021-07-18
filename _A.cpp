#include <bits/stdc++.h>
#define ll long long int
using namespace std;
template<class T>bool chmax(T &a, const T &b){if(a>b){a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b){if(b<a){a=b; return 1;} return 0;}

int main(){
	ll a,b,c;
	cin >> a>> b >> c;
	ll e,f;
	e = b - a;
	f = c - b;
	if(e < f){
		if(abs(f - e) % 2 == 1){
			cout << abs(f - e) / 2 + 2<< endl;
		}
		else {
			cout << abs(f - e) / 2<< endl;
		}
	}
	else if(e > f){
		cout << abs(e - f) << endl;
	}
	else if (e == f){
		cout << "0" << endl;
	}

}
