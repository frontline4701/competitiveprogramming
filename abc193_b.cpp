#include <bits/stdc++.h>
#define ll long long
using namespace std;
template<class T>bool chmax(T &a, const T &b){if(a>b){a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b){if(b<a){a=b; return 1;} return 0;}

int main(){
	ll n; cin >> n;
	ll a,b,c;
	vector<int> d;
	for(int i= 0; i< n;i++){
		cin >> a >> b >> c;
		if(c > a) d.push_back(b);
	}

	sort(d.begin(), d.end());
	if(d.size() > 0) cout << d[0] << endl;
	else cout << "-1" << endl;

}
