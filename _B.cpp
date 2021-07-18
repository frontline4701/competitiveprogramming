#include <bits/stdc++.h>
#define ll long long
using namespace std;
template<class T>bool chmax(T &a, const T &b){if(a>b){a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b){if(b<a){a=b; return 1;} return 0;}

int main(){
	int n,x;
	cin >> n >> x;
	float ans = 0, v, p;
	for (int i = 1; i <= n; i++){
		cin >> v >> p;
		ans = (float) (ans + v * p * 0.01);
		if(ans > x) {
			cout << i << endl; 
			return 0;
		}
	}
	cout << "-1" << endl;
}
