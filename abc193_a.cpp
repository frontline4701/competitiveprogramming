#include <bits/stdc++.h>
#define ll long long
using namespace std;
template<class T>bool chmax(T &a, const T &b){if(a>b){a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b){if(b<a){a=b; return 1;} return 0;}

int main(){
	int a,b; cin >> a >>b;
	double x;
	x = (double) b/a * 100;
	x = (double) 100 - x;
	cout << x;
}
